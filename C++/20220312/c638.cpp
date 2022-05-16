#include <iostream>
using namespace std;

int main(){
	char sky[10][4] = {"��", "�A", "��", "�B", "��", "�v", "��", "��", "��", "��"};
	char ground[12][4] = {"�l", "��", "�G", "�f", "��", "�x", "��", "��", "��", "��", "��", "��"};
	
    int year;
    while (cin >> year){
        year = (year - 1744) % 60;
        cout << sky[year % 10] << ground[year % 12] << endl;
    }
    
    return 0;
}
