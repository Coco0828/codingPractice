#include <iostream>
using namespace std;

int main(){
	int h1, m1, h2, m2, h, m;
	cin >> h1 >> m1;
	cin >> h2 >> m2;
	
	m1 += h1*60;
    m2 += h2*60;
    if(m2>m1){
    	h = (m2-m1)/60;
		m = (m2-m1)%60;
	}
    else {
        m2 += 1440;
        h = (m2-m1)/60;
		m = (m2-m1)%60;
    }
    cout<< h <<" "<< m << endl;
	
	return 0;
}
