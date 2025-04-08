//Q2. Take positive integer input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number\n";
	cin>>num;
	if(num>0){
		if(num%5==0){
			cout<<num <<" is divisible by 5 \n";
		}
		else{
			cout<<num <<" is not divisible by 5 \n";
		}
	}
	else{
		cout<<"enter a valid number\n";
	}
	return 0;
}
