#include <iostream>
using namespace std;

int main(){
	float v, r;
	while(cin >> v >> r){
		float i = 1000 * v / r;
		printf("%.4f\n", i);
	}
	
	return 0;
}
