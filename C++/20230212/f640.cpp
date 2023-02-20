#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int function(){
    string input;
    cin >> input;
    
    if(input[0] == 'f') {
        int x = function();
        return 2 * x - 3;
    }else if(input[0] == 'g') {
        int x = function();
        int y = function();
        return 2 * x + y - 7;
    }else if(input[0] == 'h') {
        int x = function();
        int y = function();
        int z = function();
        return 3 * x - 2 * y + z;
    }else{
    	int num;
        stringstream ss(input);
    	ss >> num;
    	return num;
    }
}
 
int main() {
    cout << function() << endl;
    
    return 0;
}
