#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int input1[3], input2[3];
	int i;
	
	for(i = 0; i < 3; i ++){
		cin >> input1[i];
	}
	for(i = 0; i < 3; i ++){
		cin >> input2[i];
	}
	
	int newArray[6];
	
	for(i = 0; i < 3; i ++){
		newArray[i] = input1[i];
	}
	for(i = 3; i < 6; i ++){
		newArray[i] = input2[i-3];
	}
	
	sort(newArray, newArray+6);
	
	for(i = 0; i < 6; i ++){
		cout << newArray[i];
	}
	
	return 0;
}
