#include <iostream>
using namespace std;

int main(){
	int y1, m1, d1;
	int y2, m2, d2;
	scanf("%d %d %d\n", &y1, &m1, &d1);
	scanf("%d %d %d", &y2, &m2, &d2);
	
	if(y1 < 0 || y1 > 9999) return 0;
	if(y2 < 0 || y2 > 9999) return 0;
	
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int total = 0;
	
	if(y1 == y2){
		if((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0) month[1] = 29;
		if(m1 == m2){
			if(d1 > d2) total = (d1 - d2);
			else total = (d2 - d1);
		}
		else{
			if(m1 > m2){
				for(int i = m1-1; i > m2; i --){
					total += month[i-1];
				}
				total += d1;
				total += (month[m2-1] - d2);
				
			} else{
				for(int i = m2-1; i > m1; i --){
					total += month[i-1];
				}
				total += d2;
				total += (month[m1-1] - d1);
			}
		}
	}
	else{
		if(y1 > y2){
			for(int i = y1-1; i > y2; i --){
				((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)?total += 366:total += 365;
			}
			for(int i = 1; i < m1; i ++){
				((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)? month[1] = 29:month[1] = 28;
				total += month[i-1];
			}
			for(int i = 12; i > m2; i --){
				((y2 % 4 == 0 && y2 % 100 != 0) || y2 % 400 == 0)? month[1] = 29:month[1] = 28;
				total += month[i-1];
			}
			total += d1;
			total += (month[m2-1] - d2);
		}
		else{
			for(int i = y2-1; i > y1; i --){
				((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)?total += 366:total += 365;
			}
			for(int i = 1; i < m2; i ++){
				((y2 % 4 == 0 && y2 % 100 != 0) || y2 % 400 == 0)? month[1] = 29:month[1] = 28;
				total += month[i-1];
			}
			for(int i = 12; i > m1; i --){
				((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)? month[1] = 29:month[1] = 28;
				total += month[i-1];
			}
			total += d2;
			total += (month[m1-1] - d1);
		}
	}
	
	cout << total;
	
	return 0;
}
