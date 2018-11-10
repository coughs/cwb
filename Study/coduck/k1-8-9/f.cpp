#include<iostream>
using namespace std;
int main(){
//int
	int a,b,c;
	cin>>a>>b>>c;

//a
	if(a>=b&&a>=c){
		cout<<a;
	}

//b	
	else if(b>a&&b>=c){
		cout<<b;
	}

//c	
	else if(c>a&&c>b){
		cout<<c;
	}
	
	return 0;
}
