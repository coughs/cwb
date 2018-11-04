#include<iostream>
using namespace std;
int main(){
//int
	int a,b,c,d,e,f;
	cin>>a>>b>>c;

//a
	if(a>b&&a>c){
	d=1;
	}

//b	
	else if(b>a&&b>c){
	e=1;
	}

//c	
	else if(c>a&&c>b){
	f=1;
	}

//取值 
	if(a>b&&a>c&&c>b){
	cout<<a-b;
	}
	if(a>b&&a>c&&b>c){
	cout<<a-c;
	}
	if(a>b&&a>c&&c>b){
	cout<<a-b;
	}
	if(b>a&&b>c&&a>c){
	cout<<b-c;
	}
	if(b>a&&b>c&&c>a){
	cout<<b-a;
	}
	if(c>b&&c>a&&a>b){
	cout<<c-b;
	}
	if(c>b&&c>a&&b>a){
	cout<<c-a;
	}

	return 0;
}
