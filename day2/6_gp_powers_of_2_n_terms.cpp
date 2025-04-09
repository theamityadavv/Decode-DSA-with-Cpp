//Q6. Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num;
	int a=1,r=2;
	cout<<"enter 1 to continue\n";
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<a *pow(r,i-1) <<" ";
	}
}
