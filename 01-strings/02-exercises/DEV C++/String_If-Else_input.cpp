#include<iostream>
using namespace std;
int main(){
	int age1 ;
	cout<<"Enter your age: ";
	cin>>age1;
	
	int age2;
	cout<<"Enter your Brother's age: ";
	cin>>age2;
	
	if(age1 > age2){
		cout<<"Your age is greater than your brother's ";
	}
	else{
		cout<<"your age is less than your brother's ";
	}
}