/* Q17. Write a program to create a calculator that performs basic arithmetic operations (add, subtract,
multiply and divide) using switch case and functions. The calculator should input two numbers and an
operator from user.  */
#include<iostream>
using namespace std;
int add(int num1, int num2){
	return num1+num2;
}
int sub( int num1, int num2){
	return num1-num2;
}
int mul(int num1, int num2){
	return num1*num2;
}
float div(int num1, int num2){
	if(num2==0){
		cout<<"division by 0 is not allowed\n";
		return 0;
	}
	return(float)num1/num2;
}

int main(){
	int num,num1,num2;
	cout<<"Simple Calculator \n\n";
	cout<<"enter the first number\n";
	cin>>num1;
	cout<<"enter the second number\n";
	cin>>num2;
	cout<<" enter 1 for addition\n enter 2 for substraction\n enter 3 for multiplication \n enter 4 for division\n";
	cin>>num;
	switch(num){
		case 1:
			cout<<add(num1,num2);
			break;
		case 2:
			cout<<sub(num1,num2);
			break;
		case 3:
			cout<<mul(num1,num2);
			break;
		case 4:
			cout<<div(num1,num2);
			break;
		default:
			cout<<"Invalid choice. Please select between 1 to 4.\n";
	
	}
	return 0;
}
