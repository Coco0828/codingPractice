#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n, m, i;
	string input;
	while(cin >> n >> m){
		string brand[20], color[20];
		string B, C;
		for(i = 0; i < n; i ++){
			cin >> brand[i] >> color[i];
		}
		
		for(i = 0; i < m; i ++){
			cin >> input;
			if(input == "brand") cin >> B;
			else cin >> C;
		}
		
		for(i = 0; i < n; i ++){
			if((brand[i] == B) || (color[i] == C)){
				cout << brand[i] << " " << color[i] << endl;
			}
		}
		cout << endl;
	}
	
	return 0;
}
