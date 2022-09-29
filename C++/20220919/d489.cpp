#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	int x = (a + b+ c)/2;
	cout << x * (x - a) * (x - b) * (x - c); 
	
	return 0;
}
