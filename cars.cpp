#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string>

using namespace std;
int cars(string carstext){
  string range, city, highway;
  int counter=0;
  float range2=0.0, city2=0.0, highway2=0.0, sumcity=0.0, sumrange=0.0, sumhigh=0.0;
  ifstream cars;
  string line;
  cars.open(carstext.c_str());
  while(getline(cars, line)){
    if((counter%2)==0){
      range=line.substr(42, 47);
      range2=atoi(range.c_str());

      city=line.substr(53, 54);
      city2=atoi(city.c_str());

      highway=line.substr(56, 57);
      highway2=atoi(highway.c_str());

      sumrange=sumrange + range2;
      sumcity=sumcity + city2;
      sumhigh=sumhigh + highway2;

    counter++;
  }
  }
  cout<<"city mileage: "<<sumcity/93<<endl;
  cout<<"highway mileage: "<<sumhigh/93<<endl;
  cout<<"midrange vehicle price: "<<sumrange/93<<endl;
}
int main(){
  cout<<cars("93cars.txt");

}
