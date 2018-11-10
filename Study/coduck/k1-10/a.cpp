#include<iostream>
using namespace std;
int main(){
    float a,c;
    cin>>c>>a;
    float b=a;
    for(int i=0;i<c-1;++i){
        cin>>a;
        if(a<=b){
            b=a; 
        }
    }
    cout<<b;
    return 0;
} 
