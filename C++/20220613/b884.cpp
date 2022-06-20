#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(n){
		int x, y;
		cin >> x >> y;
		
		if(x < 0) x = -x;
		if(y < 0) y = -y;
		
		int yee;
		
		yee = 100 - (x + y);
		
		if((0 < yee) && (yee <= 30)) cout << "sad!";
		else if((30 < yee) && (yee <= 60)) cout << "hmm~~";
		else if((60 < yee) && (yee < 100)) cout << "Happyyummy";
		else cout << "evil!!";		
		
		n --;
	}
	
	return 0;
}
