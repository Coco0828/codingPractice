#include <iostream>
using namespace std;

int main(){
	double f;
	cin >> f;
	
	double ans = (f - 32) * 5 / 9;
	
	printf("%.3f\n", ans);
	
	return 0;
}
