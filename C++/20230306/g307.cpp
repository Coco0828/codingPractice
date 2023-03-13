#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	bool a;
	int n, k, t, score, sums, max, min;
	
	while (cin >> n >> k >> t) {
		a = true;
		t *= (k - 2);
		for (int i = 0; i < n; i ++) {
			max = 0;
			sums = 0;
			min = 99999;
			for (int j = 0; j < k; ++j) {
				cin >> score;
				sums += score;
				if(score > max) max = score;
				if(score < min) min = score;
			}
			if (sums - max - min >= t) {
				cout << i << endl;
				a = false;
			}
		}
		if (a)cout << "A is for apple." << endl;
		
	}
}
