#include <iostream>
using namespace std;

int main(){
	long long int a, b, c, n;
	
	while(cin >> a >> b >> c){
		if(a >= 10 && c >= 2){
			if(a/10 <= c/2) n = a / 10;
			else n = c / 2;
			b += n;
		}
		else b = b;
	
		cout << a << " �ӻ氮�A" << b << " �����J�O�A" << c << " �ӳJ�|�C" << endl; 
	}
	
	
	return 0;
}
