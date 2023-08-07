#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		string str;
		cin >> str;
		int l = 0, r = 0;
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '(') l ++;
			else r ++;
			
			if(r > l){
				cout << "0" << endl;
				break;
			}
			if(i == str.size() - 1){
				if(l == r) cout << str.size()/2 << endl;
				else cout<< "0" << endl;
			}
				
		}
	}
	
	return 0;
}
