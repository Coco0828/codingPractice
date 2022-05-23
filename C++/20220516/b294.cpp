#include <iostream>
#include <list>
using namespace std;

int main(){
	int n, price = 1, sum = 0;
	cin >> n;
	
	int input[100];
	
	for(int i = 0; i < n; i ++){
		cin >> input[i];
	}
	
	list<int> nums(input, input+n);
	list<int>::iterator it;
	
	for(it = nums.begin(); it!= nums.end(); it++){
		sum += (*it*price);
		
		price ++;
	}
	
	cout << sum;
	
	return 0;
}
