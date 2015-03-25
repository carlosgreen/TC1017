#include <iostream>
#include <cstdlib>

using namespace std;
int problem_1(int a[], int size){
  int sum, mean;
  for(int z=0; z<=size; z++){
  sum= sum+ a[z];
 }
 mean =sum/size;
 return mean;
}
int main(){
  int sum, mean, size;
  cout <<"enter the size "<<endl;
  cin >>size;
  int  x[size];
  for (int i=0; i<size; i++){
    cout <<"give me each of the numbers to get the mean "<<endl;
    cin>>x[i];

  }
  cout<<problem_1(x,size);
}
