#include <iostream>
using namespace std;

int main(){
	int y;
	
	while(cin >> y){
		((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))?cout << "a leap year":cout << "a normal year";
		cout << endl;
	}
	
	return 0;
}
