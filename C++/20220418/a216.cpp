#include <iostream>
using namespace std;

int main(){
	int n, m;
	
	while(cin >> n >> m){
		int sum = n, t = 1;
		while(sum <= m){
			n ++;
			sum += n;
			t ++;
		}
		cout << t << endl;
	}
	
	return 0;
}
