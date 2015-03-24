#include <iostream>

using namespace std;

int gcf(){
  int a,b,q,x,lastx,y,lasty,temp,temp1,temp2,temp3;
  cout << "Please input a" << endl;
  cin >> a;
  cout << "Please input b" << endl;
  cin >> b;
  if (b>a) {
      temp=a; a=b; b=temp;
  }
  x=0;
  y=1;
  lastx=1;
  lasty=0;
  while (b!=0) {
      q= a/b;
      temp1= a%b;
      a=b;
      b=temp1;

      temp2=x-q*x;
      x=lastx-q*x;
      lastx=temp2;

      temp3=y-q*y;
      y=lasty-q*y;
      lasty=temp3;
  }

  cout << "gcd" << a << endl;
  return 0;
}

int main ()
{
  int a,b,q,x,lastx,y,lasty,temp,temp1,temp2,temp3;
  gcf();
}
