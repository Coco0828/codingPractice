#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool compare(int &a, int &b) {
	return abs(a) < abs(b);
}

int main(){
	int numbers[1000], n, police = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> numbers[i];
		
	sort(numbers, numbers + n, compare);
		
	for (int i = 1; i < n; i++)
		if (numbers[i - 1] * numbers[i] < 0)
			police ++;
		
	cout << police << endl;
	
	return 0;
}
