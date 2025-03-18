#include<iostream>
using namespace std;
int main(){
	string s1 = "Loveraj";
	string s2 = "Kingrani";
	
	
	if(s1.length()>s2.length()){
		cout<<s1 <<" is > "<<s2;
	}
	else {
		cout<<s2 <<" is < " <<s1;
	}
}