#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int max = 0;
	for(int i = 0; i < n; i ++){
		int num = 0;
		int a;
		cin >> a;
		while(a > 0){
			num = num * 10 + a % 10;
			a /= 10;
		}
		if(num > max) max = num;
	}
	cout << max << endl;
}
