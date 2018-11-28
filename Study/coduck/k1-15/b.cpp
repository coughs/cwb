#include<iostream>

using namespace std;

int main () {
	long long i,b=0;
	int n,x;
	cin>>n;
	long a[10000];
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cin>>x;
	for(i=0;i<n;i++){
		if(a[i]==x){
			cout<<i+1;
			break;	
		} 
		else{
			b++;
		} 
	
	}
	if(b==n){
		cout<<"-1";
	} 	
	return 0;
} 

