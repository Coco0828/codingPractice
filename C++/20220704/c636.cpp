#include <iostream>
using namespace std;

int main(){
	char year[12][4] = {"��", "��", "��", "��", "�s", "�D", "��", "��", "�U", "��", "��", "��"};
	
	int n;
	
	while(cin >> n){
		if(n) cout << year[(n - 1) % 12] << endl;
		else cout << year[(-n - 1) % 12] << endl;
	}
	
	return 0;
}
