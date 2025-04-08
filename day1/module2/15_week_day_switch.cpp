//Q15. Write a program to input week number(1-7) and print day of week name using switch case.
#include<iostream>
using namespace std;
int main(){
	int week_num;
	cout<<"enter the week number between 1 to 7 \n";
	cin>>week_num;
	switch(week_num){
		case 1:
			cout<<"Sunday\n";
			break;
		case 2:
			cout<<"Monday\n";
			break;
		case 3:
			cout<<"Tuesday\n";
			break;
		case 4:
			cout<<"Wednesday\n";
			break;
		case 5:
			cout<<"Thursday\n";
			break;
		case 6:
			cout<<"Friday\n";
			break;
		case 7:
			cout<<"Saturday\n";
			break;
	}
	return 0;
}
