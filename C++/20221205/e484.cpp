#include <iostream>
using namespace std;

int main(){
	int id, k = 0;
	cin >> id;
	
	for(int i = 2; i <= id / 2; i ++){
		if(id % i == 0){
			k = 1;
			break;
		}
	}
	
	if(k == 0) cout << "yes" << endl;
	else cout << "no" << endl;
	
	return 0;
}
