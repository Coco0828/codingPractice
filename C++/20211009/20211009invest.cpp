#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int i;
	float m[5], p[5];
	float answer[5];
	
	for (i = 0; i < n; i ++){
		scanf("%f %f", &m[i], &p[i]);
		answer[i] = -((m[i] - p[i])/2);
	}
	
	for(i = 0; i < n; i ++){
		printf("%.2f", answer[i]);
		(answer[i] >= 10.00 || answer[i] <= -7.00)?cout << "%  dispose":cout << "%  keep";
		cout << endl;
	}
	
	
	return 0;
} 
