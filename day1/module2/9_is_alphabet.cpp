//Q9. Write a program to check whether a character is an alphabet or not.
#include<iostream>
using namespace std;
int main(){
	char char_;
	cout<<"enter a character \n";
	cin>>char_;
	if(char_ >='A' && char_ >= 'B' && char_>='a' && char_ >='z'){
		cout<<char_ <<" is an alphabet\n";
	}
	else{
		cout<<char_ <<" is not an alphabet\n";
	}
	return 0;
}
