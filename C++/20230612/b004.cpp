#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
	double d, l, pi;
	
	while(cin >> d >> l){
		float ans;
		pi = 2*acos(0);
        ans = pi * l/2 * sqrt((l/2)*(l/2) - (d/2)*(d/2));
        printf("%.3f\n", ans);
	}
	
	
	return 0;
}
