//Q10. Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number\n";
	cin>>num;
	if(num>0){
		if((num%5==0 || num%3==0) && num%15!=0 ){
			cout<<num <<" is divisible by 5 or 3 but not divisible by 15\n";
		}
		else{
			cout<<num <<" does not meet the condition (either not divisible by 5 or 3, or divisible by 15).\n";
		}
	}
	else{
		cout<<"enter a valid number\n";
	}
	return 0;
}
