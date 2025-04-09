//Q7. Display this AP - 100,97,94,..upto all terms which are positive.
#include<iostream>
using namespace std;
int main(){
	int num;
	int a=100,d=-3;
	cout<<"enter num to continue\n";
	cin>>num;
	for(int i=0;i<=num;i++){
		cout<<a+i*d <<" ";		
	}	
	return 0;
}
