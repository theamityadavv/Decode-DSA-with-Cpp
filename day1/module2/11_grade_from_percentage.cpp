/*Q11. Take input percentage of a student and print the Grade according to marks:
0D 91-100 Excellen9
ED 81-90 Very Goo2
&D 71-80 Goo2
%D 61-70 Can do bette+
D 51-60 Averag5
 D 40-50 Below Averag5
"D <40 Fail */

#include<iostream>
using namespace std;
int main(){
	int per;
	cout<<"enter the percentage of marks you obtained \n";
	cin>>per;
	if(per>=91 && per<=100){
		cout<<"Excellent \n";
	}
	else if(per>=81 && per<=90){
		cout<<"Very good \n";
	}
	else if(per>=71 && per<=80){
		cout<<"Good \n";
	}
	else if(per>=61 && per<=70){
		cout<<"Can do better \n";
	}
	else if(per>=51 && per<=60){
		cout<<"Average \n";
	}
	else if(per>=40 && per<=50){
		cout<<"Below Average \n";
	}
	else if (per<40){
		cout<<"Fail\n";
	}
	else{
		cout<<"enter a valid number\n";
	}
	return 0;
	
}
