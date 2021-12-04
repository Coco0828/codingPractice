#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	int i, n = 0;
	
	for(i = 0; i <= s.length(); i ++){
		n ++;
		if(s[i] == ' ') n = 0;
		cout << n << " ";
	}
	
	cout << n;	
	
	return 0;
}
