#include <iostream>
using namespace std;

int main(){
	int n, a, b, c, d, e, f, g;
	
	while(cin >> n){
		int x = n;
		
		a = n / 1000;
		n = n % 1000;
		b = n / 500;
		n = n % 500;
		c = n / 100;
		n = n % 100;
		d = n / 50;
		n = n % 50;
		e = n / 10;
		n = n % 10;
		f = n / 5;
		n = n % 5;
		g = n / 1;
	
		cout << x << " = ";
		if(a) cout << "1000*" << a;
		if(b) cout << " + 500*" << b;
		if(c) cout << " + 100*" << c;
		if(d) cout << " + 50*" << d;
		if(e) cout << " + 10*" << e;
		if(f) cout << " + 5*" << f;
		if(g) cout << " + 1*" << g;
	}
	
	
	return 0;
}
