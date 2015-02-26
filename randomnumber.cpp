#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
  int c =0;
  int b;
  int d;
  time_t t;
  srand(time(NULL));
  t = rand() % 100 + 1;
  cout<<"I just picked a random number. ";
  cout << "shh the number is" << t << endl;
  do{
    cout << "Give me your guess";
    cin>> b;
    c=c+1;
    if (t < b){
     cout<<"the number is to high "<<endl;
    } else {
      if (t > b){
        cout<<" the number is to low "<<endl;
      }
    }
  } while (t != b);
  cout << "great, that is the number, it took you " <<c<< " guesses to get the number";
  return 0;
}
