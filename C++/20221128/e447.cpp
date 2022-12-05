#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> a;
	
	int N;
	cin >> N;
	
	while(N){
		int k;
		cin >> k;
		
		if(k == 1){
			int x;
			cin >> x;
			a.push(x);
		} else if(k == 2){
			(a.empty())? cout << -1:cout << a.front();
			cout << endl;
		} else if(k == 3){
			if(!a.empty()){
				a.pop();
			}
		}
		
		N --;
	}
	
	
	return 0;
}
