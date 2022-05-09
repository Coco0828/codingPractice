#include <iostream>
using namespace std;

int main(){
	int n, i, j;
	cin >> n;
	
	int x[1000], y[1000];
	
	for(i = 0; i < n; i ++) cin >> x[i] >> y[i];
	
	for(i = 0; i < n; i ++){
		for(j = i+1; j < n; j ++){
			if(x[i] > x[j]){
				swap(x[i], x[j]);
				swap(y[i], y[j]);
			}
			else if(x[i] == x[j] && y[i] > y[j]){
				swap(x[i], x[j]);
				swap(y[i], y[j]);
			}
		}		
	}
	
	for(i = 0; i < n; i ++){
		cout << x[i] << " " << y[i] << endl; 
	}
	
	return 0;
}
