#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(n){
		int a, b, c, k = 0;
		cin >> a >> b >> c;
		
		for(int i = a + 1; i < b; i ++){
			if(i % c != 0){
				cout << i << " ";
				k ++;
			}
		}
		
		if(k == 0) cout << "No free parking spaces.";
		
		cout << endl;
		
		n --;
	}
	
	return 0;
}
