#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	/*stack<int> numbers;
	
	int i;
	int a;
	
	for(i = 0; i < n; i ++){
		cin >> a;
		numbers.push(a);
	}
	
	int sum;
	
	for(i = 2; i < 5; i ++){
		sum += numbers[i];
	}
		
	int min = 9;
	
	for(i = 2; i < 5; i ++){
		if(numbers[i] <= min) min = numbers[i];	
	}
	
	int answer = sum * min;
	
	cout << answer << endl;
	cout << "3 5";*/
	
	int i, j;
	
	int array[100000];
	
	for(i = 0; i < n; i ++){
		cin >> array[i];
	}
	
	int min = 9;
	
	for(i = 0; i < n; i ++){
		if(array[i] <= min) min = array[i];
	}
	
	int maxSum = 0;
	
	for(i = 0; i < n; i ++){
		for(j )
		sum += array[i];		
	}
	
	int answer;
	
	answer = sum * min;
	
	cout << answer << endl;
	cout << "3 5";
	
	return 0;
}
