#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
		string a;
		getline(cin, a);
		
		for(int i = 0; i < a.size(); i++){
			if(a[i]=='X' || a[i]=='Y' || a[i]=='Z') a[i] -= 23;
			else a[i] += 3;
			cout << a[i];
		}

		cout << endl;
		n--;
	}
	
	return 0;
}
