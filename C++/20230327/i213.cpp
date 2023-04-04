#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n, k;
	cin >> n;
	
	stack<int> a;
	
	while(n){
		cin >> k;
		
		if(k == 1){
			int x;
			cin >> x; 
			a.push(x);
		}
		else if(k == 2){
			if(a.empty()){
				cout << -1 << endl;
			}else{
				cout << a.top() << endl;
			}
		}
		else if(k == 3){
			if(!a.empty()){
				a.pop();
			}
		}
		
		
		n --;
	}
	
	
	return 0;
}
