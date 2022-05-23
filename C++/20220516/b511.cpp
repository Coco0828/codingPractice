#include <iostream>
using namespace std;

int main(){
	int N, i, final;
	int price[5] = {0};
	int nums[5];
	
	cin >> N;
	
	for(i = 0; i < N; i ++){
		cin >> price[i];
	}
	
	cin >> final;
	
	//cout << N << " " << price[0] << " " << price[1] << " " << price[2] << " " << final;
	
	
	for(nums[0] = 0; nums[0] < 100; nums[0] ++){
		for(nums[1] = 0; nums[1] < 100; nums[1] ++){
			for(nums[2] = 0; nums[2] < 100; nums[2] ++){
				for(nums[3] = 0; nums[3] < 100; nums[3] ++){
					for(nums[4] = 0; nums[4] < 100; nums[4] ++){
						if((nums[0] * price[0]) + (nums[1] * price[1]) + (nums[2] * price[2]) + (nums[3] * price[3]) + (nums[4] * price[4]) == final){
							cout << "(";
							for(i = 0; i < N; i ++){
								cout << nums[0];
								(i == (N-1))?cout << ")" << endl: cout << ",";
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
} 
