//Q12. Write a program to check whether a given character is a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){
	char char_;
	cout<<"enter a character \n";
	cin>>char_;
	if(char_ =='A' || char_ == 'E' || char_=='I' || char_ =='O' || char_ =='U' || char_ =='a' || char_ == 'e' || char_=='i' || char_ =='o' || char_=='u' ){
		cout<<char_ <<" is an vowel\n" ;
	}
	else{
		cout<<char_ <<" is a consonant\n";
	}
	return 0;
}
