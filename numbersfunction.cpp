#include <iostream>
using namespace std;

int sum(int a, int b) {
return a+b;
}
int diff(int a, int b) {
return a-b;
}
int product(int a, int b) {
return a*b;
}
int div(int a, int b) {
return a/b;
}
int remainder(int a, int b) {
return a%b;
}
int main(){
  int a, b;
  cout <<"enter the first value"<<endl;
  cin>> (a);
  cout <<"enter the second value"<<endl;
  cin>> (b);

  cout <<"the sum of the numbers is "<<sum (a,b)<< endl;
  cout <<"the difference of the numbers is "<<diff (a, b)<< endl;
  cout <<"the product of the numbers is "<<product (a, b)<< endl;
  cout <<"the integer divition of the numbers is "<<div (a, b)<< endl;
  cout <<"the remainder of the numbers is "<<remainder (a, b)<< endl;

  return 0;
}
