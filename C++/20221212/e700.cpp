#include <iostream>
using namespace std;

int main(){
	int m, d;
	
	while(scanf("%d/%d", &m, &d)){
		if(m == 1){
			if(d > 20) cout << "���~�y" << endl;
			else cout << "���~�y" << endl;
		}
		else if(m == 2){
			if(d > 19) cout << "�����y" << endl;
			else cout << "���~�y" << endl;
		}
		else if(m == 3){
			if(d > 20) cout << "�d�Ϯy" << endl;
			else cout << "�����y" << endl;
		}
		else if(m == 4){
			if(d > 20) cout << "�����y" << endl;
			else cout << "�d�Ϯy" << endl;
		}
		else if(m == 5){
			if(d > 21) cout << "���l�y" << endl;
			else cout << "�����y" << endl;
		}
		else if(m == 6){
			if(d > 21) cout << "���Ȯy" << endl;
			else cout << "���l�y" << endl;
		}
		else if(m == 7){
			if(d > 22) cout << "��l�y" << endl;
			else cout << "���Ȯy" << endl;
		}
		else if(m == 8){
			if(d > 21) cout << "�B�k�y" << endl;
			else cout << "��l�y" << endl;
		}
		else if(m == 9){
			if(d > 23) cout << "�ѯ��y" << endl;
			else cout << "�B�k�y" << endl;
		}
		else if(m == 10){
			if(d > 23) cout << "���Ȯy" << endl;
			else cout << "�ѯ��y" << endl;
		}
		else if(m == 11){
			if(d > 22) cout << "�g��y" << endl;
			else cout << "���Ȯy" << endl;
		}
		else if(m == 12){
			if(d > 22) cout << "���~�y" << endl;
			else cout << "�g��y" << endl;
		}
	}
	
	return 0;
}
