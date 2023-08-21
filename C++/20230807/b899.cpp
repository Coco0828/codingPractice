#include <iostream>
using namespace std;

int main(){
	double x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	
	double m12, m13, m23;
	m12 = (y1-y2)/(x1-x2);
	m13 = (y1-y3)/(x1-x3);
	m23 = (y2-y3)/(x2-x3);
	
	double x, y;
	
	if(m12 * m13 == -1){
		x = x2+x3-x1;
		y = y2+y3-y1;
	}
	else if(m13*m23 == -1){
		x = x1+x2-x3;
		y = y1+y2-y3;
	}
	else{
		x = x1+x3-x2;
		y = y1+y3-y2;
	}
	
	cout << x << " " << y;
	
	
	return 0;
}
