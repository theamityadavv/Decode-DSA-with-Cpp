/*Q14. Given the marks of the student. If the marks are greater than 33 print the result as pass otherwise fail
without using if-else statement. */
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"enter the marks  of the student \n";
	cin>>marks;
	cout<<(marks>33 ?"Pass":"Fail") <<endl;
	return 0;	
}
