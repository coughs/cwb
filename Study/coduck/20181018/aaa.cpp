#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a,c;
	char b;
	cin>>a>>b>>c;
	cout<<b+0;
	if(b== '+'){
	cout<<a<<b<<c<<"="<<a+c;
	}
	if(b== '-'){
	cout<<a<<b<<c<<"="<<a-c;
	}
	if(b== '*'){
	cout<<a<<b<<c<<"="<<a*c;
	}
	if(b== '/'){
	cout<<a<<b<<c<<"="<<a/c;
	}
	return 0;
}

