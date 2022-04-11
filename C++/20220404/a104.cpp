#include <iostream>
using namespace std;

int main(){
	int n;
	
	while(cin >> n){
		int i, j, a[1000] = {0};
	
		for(i = 0; i < n; i ++){
			cin >> a[i];
		}
		
		for(i = 0; i < n; i ++){
			for(j = i+1; j < n; j ++){
				if(a[j] < a[i]) swap(a[i], a[j]);
			}
		}
		
		for(i = 0; i < n; i ++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
