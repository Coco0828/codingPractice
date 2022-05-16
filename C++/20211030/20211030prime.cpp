#include <iostream>
#include <vector>
using namespace std;

int main(){
	int i, j;
	int k = 0;
	vector<int> prime;
	
	for(i = 101; i < 201; i ++){
		for (j = 1; j < 201; j ++){
			if (i % j == 0) k += 1;
		}
		if(k == 2) prime.push_back(i);
		k = 0;
	}
	
	cout << prime.size() << endl;
	for(i = 0; i < prime.size(); i ++){
		cout << prime[i] << " ";
	}
	
	return 0;
}
