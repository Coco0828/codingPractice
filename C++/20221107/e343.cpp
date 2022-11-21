#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int w, h;
	
	while(cin >> w >> h){
		float a = h / 100;
		cout << a << endl;
		float bmi = w / (a * a);
		//printf("%.1f\n", bmi);
		cout << bmi << endl;
	}
	
	//float bmi = w / ((h / 100) * (h / 100));
	
	//cout << fixed << setprecision(1) << bmi << endl;
	//printf("%.1f", bmi);
	
	return 0;
}
