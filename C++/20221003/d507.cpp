#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	int x, y, z;
	if(a > b && a > c){
		x = a;
		y = b;
		z = c;
	}
	else if(b > a && b > c){
		x = b;
		y = a;
		z = c;
	}
	else if(c > a && c > b){
		x = c;
		y = a;
		z = b;
	}
	
	int h = y * y + z * z;
	int r = x * x;
	
	if(h == r) cout << "right triangle";
	else if(h > r) cout << "acute triangle";
	else if(h < r) cout << "obtuse triangle";
	
	return 0;
}
