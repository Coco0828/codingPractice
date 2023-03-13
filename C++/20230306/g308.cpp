#include <iostream>
using namespace std;

int main() {
	bool brownie[1000];
	int n, t, jumpto, k[1000], eats;
	
	while (cin >> n >> t) {
		eats = 0;
		for (int i = 0; i < n; i ++)
			cin >> k[i];
		for (int i = 0; i < n; i ++)
			cin >> brownie[i];
		do {
			if (brownie[t])
				++eats;
			jumpto = k[t];
			k[t] = -1;
			t = jumpto;
		} while (k[t] != -1);
		
		cout << eats << '\n';
	}
}
