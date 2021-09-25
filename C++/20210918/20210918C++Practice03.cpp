#include <iostream>
using namespace std;

class rectangular{
	private:
		int length;
		int width;
		int height;
	
	public:
		void inputLength(int l){
			length = l;
		}
		void inputWidth(int w){
			width = w;
		}
		void inputHeight(int h){
			height = h;
		}
		int square(){			
			return (length * width * 2) + (length * height * 2) + (width * height * 2);
		}
		int cube(){
			return length * width * height;
		}
};

int main(){
	int l,w,h;
	int squareAnswer, cubeAnswer;
	
	cin >> l;
	cin >> w;
	cin >> h;
	
	rectangular a;
	a.inputLength(l);
	a.inputWidth(w);
	a.inputHeight(h);
	
	squareAnswer = a.square();
	cubeAnswer = a.cube();
	
	cout << squareAnswer << endl;
	cout << cubeAnswer;
}
