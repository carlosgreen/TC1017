#include <iostream>
#include <sstream>
#include <stdio.h>
#include "sstream"
#include <algorithm>
using namespace std;

int main(){
	string pali;
	string word,newword;
	cout<<"give me a word "<<endl;
	cin >>word;
	cout<<"please enter the word again "<<endl;
  cin>> newword;
	word= string(word.rbegin(), word.rend());
	if (word == newword){
		cout<<" true ";
	}else {
		cout<<" false ";
	}



	cout<<"the inverted word is "<<word;
	return 0;
}
