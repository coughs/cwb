#include<iostream>

using namespace std;

int main () {
	int n,m,b=0;
	cin>>n;
	int a[n-1];
	for(int i=1;i<=n;i++){
		cin>>a[i-1];
	}
	cin>>m;
	for(int i=0;i<=n;i++){
		if(a[i-1]==m){
			b++;
		} 
	}
	cout<<b;
	return 0;
} 

