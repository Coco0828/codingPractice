#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cin >> a;
	
	for(int i = 0; i < a.length(); i ++){
		if(a[i+1] == NULL) cout << a[i] << endl;
		else cout << a[i] << "-"; 
	}
	
	return 0;
}
