//Q1. Take positive integer input and tell if it is even or odd
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a positive number\n";
	cin>>num;
	if(num>0){
		if(num%2==0){
			cout<<num <<" is an even number\n";
		}
		else{
			cout<<num <<" is an odd number\n";
			}
	}
	else{
		cout<<"enter a valid number\n";
	}
	return 0;
	
}
