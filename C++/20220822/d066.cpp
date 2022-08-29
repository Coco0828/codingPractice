#include <iostream>
using namespace std;

int main(){
	int h, m;
	cin >> h >> m;
	
	if(h > 7 && h < 17) cout << "At School" << endl;
	else if(h == 7 && m >= 30) cout << "At School" << endl;
	else cout << "Off School" << endl; 
	
	
	return 0;
}
