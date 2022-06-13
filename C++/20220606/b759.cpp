#include <iostream>
#include <string>
using namespace std;

int main(){
	string x;
	cin >> x;
	
	int i, j;
	
	for(i = 0; i < x.length(); i ++){
		for(j = 0; j < x.length(); j ++){
			if((i + j) < x.length()) cout << x[i+j];
			cout << x[i+j-x.length()];
		}
		cout << endl;
	}
	
	
	
	return 0;
}
