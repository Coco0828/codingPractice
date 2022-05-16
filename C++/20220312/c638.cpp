#include <iostream>
using namespace std;

int main(){
	char sky[10][4] = {"¥Ò", "¤A", "¤ş", "¤B", "¥³", "¤v", "©°", "¨¯", "¤Ğ", "¬Ñ"};
	char ground[12][4] = {"¤l", "¤¡", "±G", "¥f", "¨°", "¤x", "¤È", "¥¼", "¥Ó", "¨»", "¦¦", "¥è"};
	
    int year;
    while (cin >> year){
        year = (year - 1744) % 60;
        cout << sky[year % 10] << ground[year % 12] << endl;
    }
    
    return 0;
}
