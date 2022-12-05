#include <iostream>
#include <string>
using namespace std;

int main(){
	string n;
	cin >> n;
	
	while(1){
		cout << n;
		if(cin >> n) cout << " little, ";
		else{
			cout << " little Indians";
			break;
		}
	}
	
	return 0;
}
