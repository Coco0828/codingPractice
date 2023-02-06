#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int chains, strongestChain = 0, chainLen, strength, weak;
	cin >> chains;
	
	while(--chains) {
		cin >> chainLen >> weak;
		while(--chainLen) {
			cin >> strength;
			weak = min(weak, strength);
		}
		strongestChain = max(strongestChain, weak);
	}
	
	cout << strongestChain << endl;
	
	return 0;
}
