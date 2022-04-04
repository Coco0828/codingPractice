#include <iostream>
using namespace std;

int main(){
	int a, b, r;

	while (cin >> a >> b){
		while (b != 0){
			r = a % b;
			a = b;
			b = r;
		}
		cout << a << endl;
	}
	
	return 0;
}
