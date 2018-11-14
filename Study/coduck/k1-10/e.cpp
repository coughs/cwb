#include <iostream>

#include <cstdio>

using namespace std;

int main() {
	
	int n=0;
	double m,a=0;
	cin>>n;

	for (int i=1; i<n+1; i++) {
		m=a;
		a=m+(double)1/i;
	}
	printf("%.2f",a);
	
	return 0;
}

