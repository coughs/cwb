#include<iostream>
#include<cstdio>
using namespace std;
int main () {
	float x, n;
	cin>>x>>n;
	for(int i=1;i<=n;i++){
		x=x*1.001;
	}
	printf("%0.4f",x); 
	return 0;
}


