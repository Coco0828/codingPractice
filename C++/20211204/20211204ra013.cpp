#include <iostream>
#include <string>
using namespace std;

string intToRoman(int n);

int main(){
	string roman1, roman2;
	
	while(getchar() != ' ') cin >> roman1;
	cin >> roman2;
	
	int i;
	int number1 = 0, number2 = 0;
	int skip = 0;
	
	for(i = 0; i < 15; i ++){
		if(skip == 1){
			skip = 0;
			continue;
		}
		
		if(roman1[i] == 'I' && roman1[i + 1] == 'V'){
			number1 += 4;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'I' && roman1[i + 1] == 'X'){
			number1 += 9;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'X' && roman1[i + 1] == 'L'){
			number1 += 40;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'X' && roman1[i + 1] == 'C'){
			number1 += 90;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'C' && roman1[i + 1] == 'D'){
			number1 += 400;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'C' && roman1[i + 1] == 'M'){
			number1 += 900;
			skip = 1;
			continue;
		}
		
		if(roman1[i] == 'I') number1++;
		else if(roman1[i] == 'V') number1 += 5;
		else if(roman1[i] == 'X') number1 += 10;
		else if(roman1[i] == 'L') number1 += 50;
		else if(roman1[i] == 'C') number1 += 100;
		else if(roman1[i] == 'D') number1 += 500;
		else if(roman1[i] == 'M') number1 += 1000;
	}
	
	for(i = 0; i < 15; i ++){
		if(skip == 1){
			skip = 0;
			continue;
		}
		
		if(roman2[i] == 'I' && roman2[i + 1] == 'V'){
			number2 += 4;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'I' && roman2[i + 1] == 'X'){
			number1 += 9;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'X' && roman2[i + 1] == 'L'){
			number2 += 40;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'X' && roman2[i + 1] == 'C'){
			number2 += 90;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'C' && roman2[i + 1] == 'D'){
			number2 += 400;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'C' && roman2[i + 1] == 'M'){
			number2 += 900;
			skip = 1;
			continue;
		}
		
		if(roman2[i] == 'I') number2++;
		else if(roman2[i] == 'V') number2 += 5;
		else if(roman2[i] == 'X') number2 += 10;
		else if(roman2[i] == 'L') number2 += 50;
		else if(roman2[i] == 'C') number2 += 100;
		else if(roman2[i] == 'D') number2 += 500;
		else if(roman2[i] == 'M') number2 += 1000;
	}
	
	//cout << number1 << " " << number2;
	
	int sub;
	if(number1 >= number2) sub = number1 - number2;
	else sub = number2 - number1;
	
	string answer;
	
	answer = intToRoman(sub);
	cout << answer;
	
	return 0;
}

string intToRoman(int n) {
    string str_romans[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string result;
	int i;

    for (i = 0; i < 13; ++ i){
        while(n - values[i] >= 0){
            result += str_romans[i];
            n -= values[i];
        }
    }
    return result;
}
