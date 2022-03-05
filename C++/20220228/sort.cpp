#include <iostream>
using namespace std;

int main(){
	int array[10] = {10,1,9,6,5,2,7,3,8,4};
	int x,y;
	int temp;
	
	for(x = 0; x < 10; x ++){
		for(y = x + 1; y < 10; y ++){
			if(array[x] > array[y]){
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
			}
		}
	}
	
	for(x = 0; x < 10; x ++){
		cout << array[x] << ", ";
	}

	
	return 0;
}
