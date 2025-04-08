//Q16. Write a program to input month number and print total number of days in month using switch case.
#include<iostream>
using namespace std;
int main(){
	int month_num;
	cout<<"enter the month number between 1 to 12 \n";
	cin>>month_num;
	switch(month_num){
		case 1:
			cout<<"31\n";
			break;
		case 2:
			cout<<"28\n";
			break;
		case 3:
			cout<<"31\n";
			break;
		case 4:
			cout<<"30\n";
			break;
		case 5:
			cout<<"31\n";
			break;
		case 6:
			cout<<"30\n";
			break;
		case 7:
			cout<<"31\n";
			break;
		case 8:
			cout<<"31\n";
			break;
		case 9:
			cout<<"30\n";
			break;
		case 10:
			cout<<"31\n";
			break;
		case 11:
			cout<<"30\n";
			break;
		case 12:
			cout<<"31\n";
			break;
			default:
		cout<<"enter the valid month number \n";
	}

	return 0;
}
