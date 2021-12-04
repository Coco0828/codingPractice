#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int i, root1 = -55, root2 = -55;
	
	for(i = 10; i > -10; i --){
		if(((a*i*i) + (b*i) + c) == 0){
			if(root1 == -55) root1 = i;
			else root2 = i;
		}
	}
	
	if(root1 != -55 && root2 == -55) root2 = root1;
	
	if(root2 != -55 && root1 != root2){
		cout << "Two different roots x1=" << root1 << " , x2=" << root2;
	} else if(root2 != -55 && root1 == root2){
		cout << "Two same roots x=" << root1;
	} else cout << "No real root";
	
}
