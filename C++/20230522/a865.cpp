#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	string input;
	
    map<char, int> charToNumberMap;
    charToNumberMap['A'] = 1;
    charToNumberMap['B'] = 2;
    charToNumberMap['G'] = 3;
    charToNumberMap['D'] = 4;
    charToNumberMap['E'] = 5;
    charToNumberMap['#'] = 6;
    charToNumberMap['Z'] = 7;
    charToNumberMap['Y'] = 8;
    charToNumberMap['H'] = 9;
	charToNumberMap['I'] = 10;
    charToNumberMap['K'] = 20;
    charToNumberMap['L'] = 30;
    charToNumberMap['M'] = 40;
    charToNumberMap['N'] = 50;
    charToNumberMap['X'] = 60;
    charToNumberMap['O'] = 70;
    charToNumberMap['P'] = 80;
    charToNumberMap['Q'] = 90;
    charToNumberMap['R'] = 100;
    charToNumberMap['S'] = 200;
    charToNumberMap['T'] = 300;
    charToNumberMap['U'] = 400;
    charToNumberMap['F'] = 500;
    charToNumberMap['C'] = 600;
    charToNumberMap['$'] = 700;
    charToNumberMap['W'] = 800;
    charToNumberMap['3'] = 900;
    
    while(getline(cin, input)){
    	if(input == ".") {
    		break;
		}
   		int answer = 0;
   		for(int i = 0; i < input.length(); i ++){
   			answer += charToNumberMap[input[i]];
		}
		cout << answer << endl;
		
    	
	}
    
    return 0;
}
