#include <iostream>
using namespace std;

int main(){
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	
	int i = a3 + b3;
	
	while(1){
		if(i % a1 == b1 && i % a2 == b2){
			cout << i << endl;
			break;
		}
		i += a3;
	}
	
	return 0;
}
