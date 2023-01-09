#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string a[50], input;
	
	int st = 0;
	getline(cin, input);
	stringstream ss(input);
	while (ss >> a[st])
		st ++;
	
	int n;
	cin >> n;
	cout << a[st - n] << endl;
	
	return 0;
}
