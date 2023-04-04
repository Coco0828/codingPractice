#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int toi[199999];
	
	for(int i = 0; i < n; i ++) cin >> toi[i];
	
	int sum = 0;
	
	for(int i = 0; i < n ; i ++){
		if(toi[i] == 1 && i == 0){
			sum ++;
			toi[i] = 2;
		}
		if(toi[i] == 1 && toi[i-1] != 2){
			sum ++;
			toi[i] = 2;
		}
		
	}
	cout << sum;
	
	return 0;
}
