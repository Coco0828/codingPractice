#include <iostream>
using namespace std;

int main(){
	int y;
	cin >> y;
	
	((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))?cout << "a leap year":cout << "a normal year";
	
	return 0;
}
