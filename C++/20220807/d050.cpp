#include <iostream>
using namespace std;

int main(){
	int h;
	cin >> h;
	
	int a = h - 15;
	
	if(a >= 0){
		cout << a % 24 << endl;
	} else{
		cout << a + 24 << endl;
	}
	
	return 0;
}
