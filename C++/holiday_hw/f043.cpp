#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	if(a != b){
		int c = a - b;
		if(c < b) cout << c << "+" << b;
		else cout << b << "+" << c;
	}else{
		b = b - 3;
		if(b < 3) cout << b << "+" << 3;
		else cout << 3 << "+" << b;
	}
	cout << "=" << a << endl;
	
	
	return 0;
}
