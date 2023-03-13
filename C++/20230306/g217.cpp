#include <iostream>
using namespace std;

int main() {
	int t, n, numbers[100], counter, major;
	cin >> t;
	while (t) {
		counter = 0;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> numbers[i];
			if (!counter) {
				major = numbers[i];
				counter = 1;
			}
			else if (numbers[i] == major)
				++counter;
			else
				--counter;
		}
		counter = 0;
		for (int i = 0; i < n; ++i)
			if (numbers[i] == major)
				++counter;
		cout << (counter <= (n >> 1) ? "Yes\n" : "No\n");
		
		t --;
	}
}
