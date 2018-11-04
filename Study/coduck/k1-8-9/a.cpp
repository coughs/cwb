#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	t=t%10*100+t%100-t%10+((t-t%100)/100);
	cout<<t; 
	return 0;
}
