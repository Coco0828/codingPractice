#include <iostream>
using namespace std;

int main(){
	int n;
	int a[1000], b[1000];
	
	while(cin >> n){
		int i, j;
		for(i = 0; i < n; i ++){
			cin >> a[i];
			b[i] = a[i];
		}
		for(i = 0; i < n; i ++){
			while(b[i] >= 10){
				b[i] = b[i] % 10;
			}
		}
		for(i = 0; i < n; i ++){
			for(j = i+1; j < n; j ++){
				if(b[j] < b[i]){
					swap(b[i], b[j]);
					swap(a[i], a[j]);
				}
			}
		}	
		
		for(i = 0; i < n; i ++){
			for(j = i+1; j < n; j ++){
				if(b[j] == b[i] && a[i] < a[j]){
					//swap(b[i], b[j]);
					swap(a[i], a[j]);
				}
			}
		}
		
		/*for(i = 0; i < n; i ++){
			cout << b[i] << " ";
		}
		cout << endl;*/
		for(i = 0; i < n; i ++){
			cout << a[i] << " ";
		}
		
		cout << endl;
	}
	
	
	
	return 0;
}
