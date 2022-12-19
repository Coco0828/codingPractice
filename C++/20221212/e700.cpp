#include <iostream>
using namespace std;

int main(){
	int m, d;
	
	while(scanf("%d/%d", &m, &d)){
		if(m == 1){
			if(d > 20) cout << "¤ô²~®y" << endl;
			else cout << "¼¯½~®y" << endl;
		}
		else if(m == 2){
			if(d > 19) cout << "Âù³½®y" << endl;
			else cout << "¤ô²~®y" << endl;
		}
		else if(m == 3){
			if(d > 20) cout << "¨d¦Ï®y" << endl;
			else cout << "Âù³½®y" << endl;
		}
		else if(m == 4){
			if(d > 20) cout << "ª÷¤û®y" << endl;
			else cout << "¨d¦Ï®y" << endl;
		}
		else if(m == 5){
			if(d > 21) cout << "Âù¤l®y" << endl;
			else cout << "ª÷¤û®y" << endl;
		}
		else if(m == 6){
			if(d > 21) cout << "¥¨ÃÈ®y" << endl;
			else cout << "Âù¤l®y" << endl;
		}
		else if(m == 7){
			if(d > 22) cout << "·à¤l®y" << endl;
			else cout << "¥¨ÃÈ®y" << endl;
		}
		else if(m == 8){
			if(d > 21) cout << "³B¤k®y" << endl;
			else cout << "·à¤l®y" << endl;
		}
		else if(m == 9){
			if(d > 23) cout << "¤Ñ¯¯®y" << endl;
			else cout << "³B¤k®y" << endl;
		}
		else if(m == 10){
			if(d > 23) cout << "¤ÑÃÈ®y" << endl;
			else cout << "¤Ñ¯¯®y" << endl;
		}
		else if(m == 11){
			if(d > 22) cout << "®g¤â®y" << endl;
			else cout << "¤ÑÃÈ®y" << endl;
		}
		else if(m == 12){
			if(d > 22) cout << "¼¯½~®y" << endl;
			else cout << "®g¤â®y" << endl;
		}
	}
	
	return 0;
}
