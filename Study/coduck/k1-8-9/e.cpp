#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float pi,r,h;
    int t;
    pi=3.14159;
    cin>>h>>r;
    t = 1*(20*10*10*10/(pi*r*r*h)*1)+0.9999999999999999;
    //cout<<fixed<<setprecision(5)<<; 
    cout<<t;
    return 0;
}
