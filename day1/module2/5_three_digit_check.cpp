//Q5. Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a positive number\n";
	cin>>num;
	if(num>0){
		if(num>99 && num<1000){
			cout<<num <<" is a three digit number \n";
		}
		else{
			cout<<num <<" is not a three digit number \n";
		}
	}
	else{
		cout<<"enter a valid number\n";
	}
	return 0;
}
