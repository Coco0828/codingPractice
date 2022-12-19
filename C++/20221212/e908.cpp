#include <iostream>
#include <string>
using namespace std;

int main(){
	string day;
	unsigned int n, a, ans;
	
	cin >> day;
	cin >> n;
	
	if(day == "Monday") a = 1;
	else if(day == "Tuesday") a = 2;
	else if(day == "Wednesday") a = 3;
	else if(day == "Thursday") a = 4;
	else if(day == "Friday") a = 5;
	else if(day == "Saturday") a = 6;
	else if(day == "Sunday") a = 7;
	
	ans = (a + n) % 7;
	if(ans == 0) ans = 7;
	
	if(ans == 1) cout << "Monday";
	else if(ans == 2) cout << "Tuesday";
	else if(ans == 3) cout << "Wednesday";
	else if(ans == 4) cout << "Thursday";
	else if(ans == 5) cout << "Friday";
	else if(ans == 6) cout << "Saturday";
	else if(ans == 7) cout << "Sunday";
	
	return 0;
}
