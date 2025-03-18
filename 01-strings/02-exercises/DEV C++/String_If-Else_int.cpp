#include<iostream>
using namespace std;
int main(){
	string s1 ;
	string s2 ;
	cout<<"Enter a string: ";
	cin>>s1;  cout<<""<<endl;
	cout<<"Enter second string: ";
	cin>>s2;
	
	int s1_len = s1.length() ;
	int s2_len = s2.length() ;

	if(s1_len>s2_len){
		cout<<s1;
	}
	else{
		cout<<s2;
	}
}