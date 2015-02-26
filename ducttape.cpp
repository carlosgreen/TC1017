#include <iostream>
using namespace std;

int main(){
  int a, c, d;
  char b;

  cout <<"does it move? 1) yes 2) no";
  cin >> (a);
  if (a == 1) {
    cout << "should it move? 1)yes 2)no";
    cin>>(c);
    if (c == 1) {
      cout << "then no problem 8)";

    }
    else {
      cout << "then use duct tape";
     }



    }
    else {
      cout <<"Should it move? 1)yes 2)no";
      cin >>(d);
      if (d==1) {
        cout << "then use DW40";
    }
    else {
      cout <<"then no problem 8)";
    }
  }
  return 0;
}
