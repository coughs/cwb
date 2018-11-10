#include<iostream>
using namespace std;

int main(){
	float a,b,c,d;

	for(int i = 0; i<5;i++){
		float a,b,c,d;
		cin>>a>>b>>c>>d;

		if((a*b)<(a*c)&&(a*c)<(a*d)){
			cout<<"A "<<a*b;
			cout<<""<<endl;
		}
		if((a*b)>(a*c)&&(a*c)>(a*d)){
			cout<<"C "<<a*d;
		}
		if((a*c)>(a*b)&&(a*b)>(a*d)){
			cout<<"C "<<a*d;
		}
		if(((a*c)>(a*d))&&((a*d)>(a*b))){
			cout<<"A "<<a*b;
		}

		if((a*b)>(a*d)&&(a*d)>(a*c)){
			cout<<"B "<<a*c;
		}
		if((a*d)>(a*b)&&(a*b)>(a*c)){
			cout<<"B "<<a*c;
		}
	}

	return 0;
}

