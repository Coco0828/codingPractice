#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a, int b) {
	int x;
	while (b){
		x = a % b;
		a = b;
		b = x;
	}
	return a;
}

int main() { 
	int n, t, gcd;
	cin >> n >> t;
	
	gcd = GCD(n, t);
	
	n /= gcd;
	t /= gcd;
	cout << log2(n + t) << endl;
}
