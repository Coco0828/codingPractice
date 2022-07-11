#include <iostream>
using namespace std;

int main(){
	char year[12][4] = {"¹«", "¤û", "ªê", "¨ß", "Às", "³D", "°¨", "¦Ï", "µU", "Âû", "ª¯", "½Þ"};
	
	int n;
	
	while(cin >> n){
		if(n) cout << year[(n - 1) % 12] << endl;
		else cout << year[(-n - 1) % 12] << endl;
	}
	
	return 0;
}
