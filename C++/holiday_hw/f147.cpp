#include <iostream>
using namespace std;

int main(){
	string meal[3][6] = { {}, { "", "Medium Wac", "WChicken Nugget", "Geez Burger", "ButtMilk Crispy Chicken", "Plastic Toy" }, { "", "German Fries", "Durian Slices", "WcFurry", "Chocolate Sunday" } };
	int a, b, total = 0;
	int price[3][6] = { {}, { 0, 4, 8, 7, 6, 3 }, { 0, 2, 3, 5, 7 } };
	while (cin >> a >> b, a){
		cout << meal[a][b] << ' ' << price[a][b] << endl;
		total += price[a][b];
	}
	cout << "Total: " << total << endl;
	
	return 0;
}
