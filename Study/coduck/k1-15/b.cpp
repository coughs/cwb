#include<iostream>

using namespace std;

int main () {
	long long i,b;
	int n,x;
	cin>>n;
	long a[n-1];
	for(i=1;i<=n;i++){
		cin>>a[i-1];
	}
	cin>>x;
	for(i=1;i<=n;i++){
		if(a[i-1]==x){
			cout<<i-1;
			break;	
		} 
		else{
		b++;
		} 
		if(b==5) cout<<-1;
	}
	return 0;
} 

