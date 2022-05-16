#include <iostream>
using namespace std;

int main(){
	int passwordA, passwordB, passwordC, passwordD;
	scanf("%d %d %d %d", &passwordA, &passwordB, &passwordC, &passwordD);
	
	int n;
	cin >> n;
	
	int inputA[9], inputB[9], inputC[9], inputD[9];
	int i;
	int A[9] = {0}, B[9] = {0};
	
	for(i = 0; i < n; i ++){
		scanf("%d %d %d %d ", &inputA[i], &inputB[i], &inputC[i], &inputD[i]);
		
		if(inputA[i] == passwordA) A[i]++;
		if(inputB[i] == passwordB) A[i]++;
		if(inputC[i] == passwordC) A[i]++;
		if(inputD[i] == passwordD) A[i]++;
		if(inputA[i] == passwordB || inputA[i] == passwordC || inputA[i] == passwordD) B[i]++;
		if(inputB[i] == passwordA || inputB[i] == passwordC || inputB[i] == passwordD) B[i]++;
		if(inputC[i] == passwordA || inputC[i] == passwordB || inputC[i] == passwordD) B[i]++;
		if(inputD[i] == passwordA || inputD[i] == passwordB || inputD[i] == passwordC) B[i]++;
	}
	
	for(i = 0; i < n; i ++){
		cout << A[i] << "A" << B[i] << "B" << endl;
	}
	
	return 0;
} 
