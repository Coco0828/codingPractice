#include <iostream>
using namespace std;

int main() {
	int r, c, targets;
	int find = 0, xs[26], ys[26];
	bool a[26] = {};
	char n;
	cin >> r >> c >> targets;
	for(int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j) {
			cin >> n;
			if (n != '0')
				++find, xs[n - 'a'] = j, ys[n - 'a'] = i;
				a[n - 'a'] = true;
		}
		
	if (find < targets) cout << "Mission fail." << endl;
	else{
		for (int i = 0; i < 26 && targets; ++i)
			if (a[i]){
				--targets;
				cout << ys[i] << " " << xs[i] << endl;
			}
	}
}
