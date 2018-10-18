#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a>=140){
		cout<<"   /"<<endl;
		cout<<"\\/"<<endl;
	}
	if(a<140){
		cout<<"><"<<endl;
	}
	return 0;
}

