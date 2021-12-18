#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	cin >> input;
	
	int num = 0;
	
	if(input[0] == 'A')num += 1;
	else if(input[0] == 'B')num += 10;
	else if(input[0] == 'C')num += 19;
	else if(input[0] == 'D')num += 28;
	else if(input[0] == 'E')num += 37;
	else if(input[0] == 'F')num += 46;
	else if(input[0] == 'G')num += 55;
	else if(input[0] == 'H')num += 64;
	else if(input[0] == 'I')num += 31;
	else if(input[0] == 'J')num += 73;
	else if(input[0] == 'K')num += 82;
	else if(input[0] == 'L')num += 2;
	else if(input[0] == 'M')num += 11;
	else if(input[0] == 'N')num += 20;
	else if(input[0] == 'O')num += 48;
	else if(input[0] == 'P')num += 29;
	else if(input[0] == 'Q')num += 38;
	else if(input[0] == 'R')num += 47;
	else if(input[0] == 'S')num += 56;
	else if(input[0] == 'T')num += 65;
	else if(input[0] == 'U')num += 74;
	else if(input[0] == 'V')num += 83;
	else if(input[0] == 'W')num += 21;
	else if(input[0] == 'X')num += 3;
	else if(input[0] == 'Y')num += 12;
	else if(input[0] == 'Z')num += 30;
	
	int i;
	
	for(i = 1; i < 9; i ++){
		num += ((input[i] - '0') * (9 - i));
	}
	
	num += (input[9] - '0');
	
	if(num % 10 == 0)cout << "real" << endl;
	else cout << "fake" << endl;
	
	return 0;
}
