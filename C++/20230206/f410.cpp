#include <iostream>
//#include <vector>
#include <algorithm>
using namespace std;

/*bool compare(int a, int b) {
	return a > b;
}

int main(){
	int n, door[1000];
	cin >> n;
	
	for(int i = 0; i < n; i ++){
		cin >> door[i];
	}
	
	vector<int> odd;
	vector<int> even;
	
	for(int i = 0; i < n; i ++){
		if(door[i] % 2 == 0) even.push_back(door[i]);
		else odd.push_back(door[i]);
	}
	
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	
	for(int i = 0; i < n; i ++){
		cout << even[i] << " ";
	}
	for(int i = n-1; i >= 0; i --){
		cout << odd[i] << " ";
	}
	
	return 0;
}*/

bool compare(const int &a, const int &b) {
	if ((a & 1) != (b & 1))
		return (a & 1) < (b & 1);
	if (a & 1)
		return a > b;
	return a < b;
}

int main() {
	int numbers[1000], n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> numbers[i];
	
	sort(numbers, numbers + n, compare);
	
	for (int i = 0; i < n; ++i)
		cout << numbers[i] << " ";
		
	return 0;
}
