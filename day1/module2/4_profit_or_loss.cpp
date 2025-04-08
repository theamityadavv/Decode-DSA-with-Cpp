/* Q4. If cost price and selling price of an item is input through the keyboard, write a program to determine
whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he
incurred. */
#include<iostream>
using namespace std;
int main(){
	int sp,cp;
	cout<<"enter the selling price\n";
	cin>>sp;
	cout<<"enter the cost price\n";
	cin>>cp;
	if(sp>cp){
		cout<<"seller has made a profit of " <<sp-cp <<endl;
	}
	else{
		cout<<"seller has incurred loss of " <<cp-sp <<endl;
	}
	return 0;
}
