//Q8. Take 3 positive integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"enter the first number\n";
	cin>>num1;
	cout<<"enter the second number\n";
	cin>>num2;
	cout<<"enter the third number \n";
	cin>>num3;
	if(num1>0 && num2>0 && num3>0){
		if(num1>num2 && num1>num3){
			cout<<num1 <<" is the greatest\n";
		}
		else if(num2>num1 && num2>num3){
			cout<<num2 <<" is greatest\n";
		}
		else{
			cout<<num3 <<" is greatest\n";
		}	
	}
	else{
		cout<<"enter a valid number\n";
	}
	return 0;
}
