#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	char alphabets[26][2] = {"A", "B", "C", "D", "E", "F", "G", "H",
						  "I", "J", "K", "L", "M", "N", "O", "P",
						  "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
	int nums[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19,
             		20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29,
             		32, 30, 31, 33};
	int first, last, i, sum = 0;
	
    while(cin >> input){
        for(i = 0; i < 8; i++){
            sum += (input[i] - '0') * (8-i);
        }
        last = input[8] - '0';

        if(!last) last = 10;

        for(i = 0; i < 26; i ++){
            first = ((nums[i] % 10) * 9) + (nums[i] / 10);
            if(10 - (sum + first) % 10 == last)
              cout << alphabets[i][0];
        }
        cout << endl;
    }     
	return 0;    
}
