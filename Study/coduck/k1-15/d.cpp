#include<iostream>

using namespace std;

int main(){
	int h[10],t,a=0,i=0;
	for(i=0;i<10;i++){
		cin>>h[i];
	}
	cin>>t;
	for(i=0;i<10;i++){
		if(t+30>=h[i]){
			a++;
		}
	}
	cout<<a;
	return 0;
} 

