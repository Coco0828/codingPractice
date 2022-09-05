#include <iostream>
using namespace std;

int main(){
	int t, y;
	cin >> t;
	int a = t;
	
	while(a){
		cin >> y;
		((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))?cout << "Case " << t+1-a << ": a leap year":cout << "Case " << t+1-a << ": a normal year";
		cout << endl;
		
		a--;
	}
	
	return 0;
}
