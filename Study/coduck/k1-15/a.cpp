#include<iostream>

using namespace std;

int main () {
	int n;
	cin>>n;
	float a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i-1];

	for(int i=n-1;i>=0;i--)
		cout<<a[i]<<" ";
	return 0;
} 

