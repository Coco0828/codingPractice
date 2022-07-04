#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	int x[1000], y[1000];
	
	for(int i = 0; i < N; i ++){
		cin >> x[i] >> y[i]; 
	}
	
	int max = 0;
	int a, b;
	
	for(int i = 0; i < N; i ++){
		for(int j = 0; j < N; j ++){
			if((x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i])*(x[j] - x[i]) > max){
				max = (x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i])*(x[j] - x[i]);
				a = i;
				b = j;
			}
			
		}
	}
	
	cout << a << " " << b << endl; 
	
	
	return 0;
}
