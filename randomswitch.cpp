#include <iostream>
#include "string.h"
using namespace std;

int main (){
char a;
char b;
cout << "hello, please select an option from the menu: a.- china b.- starfish c.- cryinginspace";
cin>>a;
 switch (a)
  {
    case 'a': cout <<"china has more than 200,000 million habitants but only around 200 family names"; break;
    case 'b': cout <<"starfish don't have brains"; break;
    case 'c': cout <<"you can't cry in space because there is no gravity, so your tears can't fall"; break;
   }
return 0;
 }
