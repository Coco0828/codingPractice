#include <iostream>
using namespace std;

int main(){
	int X, Y;
	cin >> X >> Y;
	
	X += 2;
	Y += 30;
	
	if(Y > 59){
		Y -= 60;
		X ++;
	}
	
	if(X > 23){
		X -= 24;
	}
	
	 printf("%02d:%02d", X, Y);
	
	return 0;
}
