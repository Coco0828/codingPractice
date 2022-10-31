#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a, b;
	int size[100], full[5000];
	int sizetotal = 0, fulltotal = 0;
	
	for(int i = 0; i < n; i ++){
		cin >> a >> b;
		size[i] = a;
		full[i] = b;
		sizetotal += a;
		fulltotal += b;
	}
	
	int min = 5000, k;
	
	while(sizetotal > 100){
		for(int i = 0; i < n; i ++){
			if(full[i] < min){
				min = full[i];
				k = i;
			}
		}
		sizetotal -= size[k];
		fulltotal -= full[k];
		size[k] = 0;
		full[k] = 0;
		n --;
	}
	
		
	cout << fulltotal;
	
	return 0; 
}
