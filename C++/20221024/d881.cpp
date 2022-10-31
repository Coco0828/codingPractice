#include <iostream>
using namespace std;

int main(){
	int d;
	
	while(cin >> d){
		cout << 50 + d * (49 * 50 * 51 / 6) - (d - 1) * 1225 << endl;
	}
	
	return 0;
}
