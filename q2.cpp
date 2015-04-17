//Carlos Daniel Varela A01328279

#include <iostream>

using namespace std;
long superpower(){
long a;
long b;
long power=1;
long counter=0;

cout<<"give me the first value "<<endl;
 cin>> a;

   cout <<"give me the second number "<<endl;
    cin>> b;

    do{
	power=power*a;
	counter=counter+1;

       }while(counter < b);

          cout<<"a, raised to the power of b: "<<power<<endl;
          return 0;
}
int main(){

	cout<<superpower();
}
