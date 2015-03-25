#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int standard_deviation(int array[], int size){
  int sum=0, mean,sumofpopm=0,stdv,i,x;
  for (int i=0; i < size; i++){
  sum=sum + array[x];
 }
 mean= sum / size;
 for(int x=0; x <= size; x++ ){
 sumofpopm= sumofpopm + (array[x]-mean);
 }
 stdv= sqrt((sumofpopm*sumofpopm)%size);
 return stdv;
}
int main(){
  int size;
  cout <<"enter the amount of numbers that will be given "<<endl;
  cin >> size;
  int z[size];
  for (int i=0; i < size; i++){
    cout <<"enter a number "<<endl;
    cin >>z[i];
    cout <<standard_deviation(z,i);

  }

}
