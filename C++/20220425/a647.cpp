#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	float m, p, x;
	
	while(n){
		cin >> m >> p;
		
		x = (p - m) / m * 100;
		
		(x == -0.00)?printf("0.00"):printf("%.2f", x);
		(x >= 10.00 || x <= -7.00)? cout << "% dispose":cout << "% keep";
		cout << endl;
		
		n --;
	}
	
	
	return 0;
}
