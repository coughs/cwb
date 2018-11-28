#include<iostream>

using namespace std;

int main () {
	long long i,b=0;
	int n,x;
	cin>>n;
	long a[100];
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cin>>x;
	for(i=0;i<n;i++){
		if(a[i]==x){
			b++;	
		} 
	}
	cout<<b;

	return 0;
} 

