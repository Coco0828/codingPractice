#include<iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	if(a > b){
		swap(a, b);
	}

	int ans = 0;

	for(int i = a; i < b+1; i++){
		if(i % 2 == 0) ans += i;
	}

	cout << ans;

}
