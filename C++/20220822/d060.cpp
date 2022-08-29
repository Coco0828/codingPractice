#include <iostream>
using namespace std;

int main(){
	int input;
	cin >> input;
	
	if(input <= 25) cout << 25 - input << endl; 
	else cout << 60 - input + 25 << endl;
	
	return 0;
}
