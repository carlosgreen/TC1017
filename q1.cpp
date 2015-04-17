#include <iostream>
#include <sstream>

using namespace std;
int triangles(){
int rows,cols,norows;
string T="T";

cout<<"give me the number of rows "<<endl;
cin>>norows;
 for(rows=1;rows<norows; rows++){
 	 for (cols=1; cols<=rows; cols++){
 	 	 cout<<T;
 	 }
 	 cout<<endl;
 }
 for(rows=norows-1; rows>0; rows--){
 	 for(cols=1; cols<rows; cols++){
 	 	 cout<<T;
 	 }
 	 cout<<endl;
 }
}
int main(){
	cout<<triangles();
}
