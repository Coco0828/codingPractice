#include <iostream>
using namespace std;

int main() {
	int n;
	
	while (cin >> n) {
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < n; j ++)
				cout << (i * n + 1) + (!(i & 1)) * j + (i & 1) * (n - j - 1) << " ";
			cout << endl;
		}
		cout << endl;
	}
	
	return 0;
}
