#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a;
	b=a%(24*60*60)%(60*60)/60;
	c=a%(60*24*60)%(60*60)%60;
	cout<<a/60/60/24<<endl;
	cout<<a/60/60%24<<":"<<b<<":"<<c;
	return 0;
}
