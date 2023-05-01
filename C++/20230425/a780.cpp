#include <iostream>
using namespace std;

int main(){
	float fo, fe, fa;
	while(cin >> fo >> fe >> fa && fo && fe && fa){
		float m = fo / fe;
		float ft = fa / m;
		printf("%.2f %.2f\n", m, ft);
	}
	
	return 0;
}
