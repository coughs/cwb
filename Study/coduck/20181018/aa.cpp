#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	cin>>a;
	
	if(a/3.0+27+23==a/1.2){
		cout<<"All";
	}
	if(a/3.0+27+23<a/1.2){
		cout<<"Bike";
	}
	if(a/3.0+27+23>a/1.2){
		cout<<"Walk";
	}
	return 0;
}
