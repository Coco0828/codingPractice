#include <iostream>
using namespace std;

int main(){
	int input;
	cin >> input;
	
	int nums[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	int a, b, c, d, e, f, g, h;
	int ans = 0;
	int i, n;
	
	while(input){
		for(a = input-1; a >= 0; a --){
			n = nums[a];
			for(i = 0; i < input-1; i ++){
				n *= 10;
			}
			ans += n;
		}
		input --;
	}
	
	cout << ans;
	
	return 0;
}
