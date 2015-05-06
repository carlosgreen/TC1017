#include <iostream>
#include <vector>

using namespace std;
int main(){
 vector <int> nums;
 int x,ans,sum=0;
  while(1){
     cout<<"give me a number "<<endl;
     cin>>x;
    if ( x == 0) break;
     nums.push_back(x);
  }
cout<<"the number of elements inside the vector is: "<<nums.size()<<endl;
cin>>ans;
cout<<"would you like to enter another number? 1)yes, 2)no "<<endl;
cin>>ans;
do{
  cout<<"give me a number "<<endl;
  cin>>x;
  nums.push_back(x);
  cout<<"would you like to enter another number? 1)yes, 2)no "<<endl;
  cin>>ans;
}while(ans==1);
cout<<"the number of elements inside the vector is: "<<nums.size();
  return 0;
}
