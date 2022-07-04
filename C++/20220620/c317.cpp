#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	while(N){
		int X, a, b;
		cin >> X >> a >> b;
		
		int ans = 0;
		
		for(int i = 1; i < X; i ++){
			for(int j = 1; j < X; j ++){
				if(i * a + j * b == X) ans ++;
			}
		}
		
		(ans)?cout << ans*ans << endl:cout << "-1" << endl;
		
		N--;
	}
	
	return 0;
}
