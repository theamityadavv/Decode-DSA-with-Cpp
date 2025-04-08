//Q4. Calculate simple interest.
#include<iostream>
using namespace std;
int main(){
	int p,r,t;
	float si;
	cout<<"simple interest calculator \n\n";
	cout<<"enter the principle amount\n";
	cin>>p;
	cout<<"enter the rate of interest\n";
	cin>>r;
	cout<<"enter the time \n";
	cin>>t;
	cout<<"the simple interest is " <<(p*r*t)/100;
	return 0;
	
}
