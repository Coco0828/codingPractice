#include <iostream>
using namespace std;

/*int main(){
	int n;
	while(cin >> n){
		if(n > 99){
			int a = n / 100;
			if(a == 1) cout << "R";
			else if(a == 2) cout << "S";
			else if(a == 3) cout << "T";
			else if(a == 4) cout << "U";
			else if(a == 5) cout << "F";
			else if(a == 6) cout << "C";
			else if(a == 7) cout << "$";
			else if(a == 8) cout << "W";
			else if(a == 9) cout << "3";
			n -= a * 100;
		}
		if(n > 9){
			int b = n / 10;
			if(b == 1) cout << "I";
			else if(b == 2) cout << "K";
			else if(b == 3) cout << "L";
			else if(b == 4) cout << "M";
			else if(b == 5) cout << "N";
			else if(b == 6) cout << "X";
			else if(b == 7) cout << "O";
			else if(b == 8) cout << "P";
			else if(b == 9) cout << "Q";
			n -= b * 10;
		}
		if(n > 0){
			if(n == 1) cout << "A";
			else if(n == 2) cout << "B";
			else if(n == 3) cout << "G";
			else if(n == 4) cout << "D";
			else if(n == 5) cout << "E";
			else if(n == 6) cout << "#";
			else if(n == 7) cout << "Z";
			else if(n == 8) cout << "Y";
			else if(n == 9) cout << "H";
		}
		cout << endl;
	}
	
	return 0;
} */

int main(){
	string greek;
	while(getline(cin, greek)){
		int n = 0;
		if(greek.length() == 3){
			if(greek[0] == 'R') n += 100;
			else if(greek[0] == 'S') n += 200;
			else if(greek[0] == 'T') n += 300;
			else if(greek[0] == 'U') n += 400;
			else if(greek[0] == 'F') n += 500;
			else if(greek[0] == 'C') n += 600;
			else if(greek[0] == '$') n += 700;
			else if(greek[0] == 'W') n += 800;
			else if(greek[0] == '3') n += 900;
			
			if(greek[1] == 'I') n += 10;
			else if(greek[1] == 'K') n += 20;
			else if(greek[1] == 'L') n += 30;
			else if(greek[1] == 'M') n += 40;
			else if(greek[1] == 'N') n += 50;
			else if(greek[1] == 'X') n += 60;
			else if(greek[1] == 'O') n += 70;
			else if(greek[1] == 'P') n += 80;
			else if(greek[1] == 'Q') n += 90;
			
			if(greek[2] == 'A') n += 1;
			else if(greek[2] == 'B') n += 2;
			else if(greek[2] == 'G') n += 3;
			else if(greek[2] == 'D') n += 4;
			else if(greek[2] == 'E') n += 5;
			else if(greek[2] == '#') n += 6;
			else if(greek[2] == 'Z') n += 7;
			else if(greek[2] == 'Y') n += 8;
			else if(greek[2] == 'H') n += 9;
		}
		cout << n;
	}
	
	return 0;
}
