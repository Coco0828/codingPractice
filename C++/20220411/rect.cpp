#include <iostream>
using namespace std;

class rect{
	public:
		int len;
		int wid;
		void inputLen(int l);
		void inputWid(int w);
		int calculate();
};

class square:public rect{
	int hei;
	public:
		int calculate();
		void inputHei(int h);
};

void rect::inputLen(int l){
	len = l;
}
void rect::inputWid(int w){
	wid = w;
}
int rect::calculate(){
	return len*wid;
}
int square::calculate(){
	return len*wid*hei;
}
void square::inputHei(int h){
	hei = h;
}

int main(){
	int l, w, h, ans;
	cout << "Please input width:" << endl;
	cin >> w;
	cout << "Please input length:" << endl;
	cin >> l;
	cout << "Please input height:" << endl;
	cin >> h;
	
	square a;
	
	a.inputLen(l);
	a.inputWid(w);
	a.inputHei(h);
	ans = a.calculate();
	
	cout << ans;
	
	return 0;
}
