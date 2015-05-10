#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
ifstream theFile;
theFile.open("test.txt");
string theLine;
while (!theFile.eof())
{
  theFile >> theLine;
  for (size_t j=0; j< theLine.length(); ++j)
  {
    theLine[j] = tolower(theLine[j]);
  }
  cout<<theLine<<std::endl;
     }

 return 0;
}
