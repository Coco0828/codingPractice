#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(n){
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		
		int x = (e*c-b*f)/(a*e-b*d);
		int y = (d*c-a*f)/(b*d-a*e);
		
		cout << x << " " << y << endl;
		
		n --;
	}
	
	return 0;
}
