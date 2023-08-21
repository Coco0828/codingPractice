#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
		int x = 0, y = 0, k = 0, max = 0, min = 9999;
		for(int i = 0; i < n; i ++){
			cin >> x;
			if(i > 0 && (x != y+1 && x != y-1)) k = 1;
			
			if(x > max) max = x;
			if(x < min) min = x;
			
			y = x;
		}
		cout << min << " " << max;
		(k == 0)? cout << " yes" << endl:cout << " no" << endl;
		
	}
	
	return 0;
}
