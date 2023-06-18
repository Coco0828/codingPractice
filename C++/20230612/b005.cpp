#include <iostream>
using namespace std;

string checkArray(int rec[4][4]){
	int r = 0, c = 0, k = 0, l = 0;
	for(int i = 0; i < 4; i ++){
		for(int j = 0; j < 4; j ++){
			r += rec[i][j];
		}
		if(r % 2 != 0) k = 1;
		r = 0;
	}
	for(int j = 0; j < 4; j ++){
		for(int i = 0; i < 4; i ++){
			c += rec[i][j];
		}
		if(c % 2 != 0) l = 1;
		c = 0;
	}
	if(k == 0 && l == 0) return "OK";
	else{
		for(int i = 0; i < 4; i ++){
			for(int j = 0; j < 4; j ++){
				if(rec[i][j] == 0) rec[i][j] = 1;
				else rec[i][j] = 0;
				if(checkArray(rec) == "OK") return "Change bit (" << i << "," << j << ")";
				else{
					if(rec[i][j] == 0) rec[i][j] = 1;
					else rec[i][j] = 0;
				}
			}
		}
	}
	return "Corrupt";
}

int main(){
	int n;
	
	while(cin >> n){
		int rec[4][4];
		for(int i = 0; i < 4; i ++){
			for(int j = 0; j < 4; j ++){
				cin >> rec[i][j];
			}
		}
		
		cout << checkArray(rec);
	}
	
	return 0;
}
