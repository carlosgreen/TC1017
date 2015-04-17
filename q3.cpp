#include <iostream>

using namespace std;
long fibonacci(){
long a=1;
long b=0;
long fibo;
long value;
cout<<"give me the value for the fibonacci series "<<endl;
cin>>value;

 for(int i=0; i<value; i++){
 	 fibo=a+b;
 	 a=b;
 	 b=fibo;
 	 cout<<fibo<<endl;
 }
 cout<<"the "<<value<<"th value of your number is "<<fibo<<endl;

 return 0;
}
int main(){
	cout<<fibonacci()<<endl;
	return 0;
}
