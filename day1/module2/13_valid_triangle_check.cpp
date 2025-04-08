//Q13. Take 3 numbers input and tell if they can be the sides of a triangle.
#include<iostream>
using namespace std;
int  main(){
	int s1,s2,s3;
	cout<<"enter the first side of triangle\n";
	cin>>s1;
	cout<<"enter the second side of triangle\n";
	cin>>s2;
	cout<<"enter the third side of triangle\n";
	cin>>s3;
	if(s1+s2>s3  && s1+s3>s2 && s2+s3>s1 ){
		cout<<s1 <<", "<<s2 <<" ," <<s3 <<" are the valid side of the triangle"; 
	}
	else{
		cout<<s1 <<", "<<s2 <<" ,"<<s3 <<" are not the valid side of the triangle";
	}
	return 0;
}
