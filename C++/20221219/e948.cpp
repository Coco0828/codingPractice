#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(n){
		float g, a, h, w, bmr;
		cin >> g >> a >> h >> w;
		
		if(g == 1){
			bmr = 13.7 * w + 5 * h - 6.8 * a + 66;
		}
		if(g == 0){
			bmr = 9.6 * w + 1.8 * h - 4.7 * a + 655;
		}
		
		printf("%.2f\n", bmr);
		
		n --;
	}
	
	return 0;
}
