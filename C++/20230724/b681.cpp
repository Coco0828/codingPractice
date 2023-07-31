#include <iostream>
using namespace std;

int main(){
	int l, d;
	while(cin >> l){
		if(l > 0) d = l*2 - 1;
		else d = l*(-2);
		cout << d << endl;
	}
	
	return 0;
}
