//Q5. Display this AP - 1,3,5,7,9.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
	int num;
	int a=1,d=2;
	cout<<"enter 1 to continue\n";
	cin>>num;
	for(int i=0;i<=100;i++){
		
		cout<<a+i*d <<" ";
		}
	
	return 0;
}
