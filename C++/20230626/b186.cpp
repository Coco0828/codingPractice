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
	
		cout << a << " 個餅乾，" << b << " 盒巧克力，" << c << " 個蛋糕。" << endl; 
	}
	
	
	return 0;
}
