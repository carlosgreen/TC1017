#include <iostream>
#include <sstream>
using namespace std;

int main(){
  int row, Rowsn, col;
     string T="T";
     cout <<"give me the number of rows";
     cin >>Rowsn;
     for(row=1;row<=Rowsn;row++){
         for(col=1;col<=row;col++){
             cout<<T;
         }
         cout<<"\n";
       }
       for(row=Rowsn-1;row>0;row--){
           for(col=1;col<=row;col++){
               cout<<T;
           }
           cout<<"\n";
         }
     }
