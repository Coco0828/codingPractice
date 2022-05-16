#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int t;
	int a[10], b[10], c[10], d[10], e[10];
	
	cin >> t;
	
	int i;
	
	for(i = 0; i < t; i ++){
		scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
		if((b[i]-a[i]) == (c[i]-b[i])) e[i] = d[i] + (b[i]-a[i]);
		else if((b[i]/a[i]) == (c[i]/b[i])) e[i] = d[i] * (b[i]/a[i]);
		else cout << "Error";
	}
	
	for(i = 0; i < t; i ++){
		cout << a[i] << " " << b[i] << " " << c[i] << " " << d[i] << " " << e[i] << endl;
	}
	
	return 0;
}
