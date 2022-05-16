/*#include <iostream>
using namespace std;

int main(){
	int J = 1, R = 1;
	int pos1 = 0, pos2 = 0;
	
	int points[5][5] = {0};
	int players[5] = {0};
	int max = 0;
	
	int i, j;
	while(J != 0 && R != 0){		
		scanf("%d %d", &J, &R);
		
		for(i = 1; i <= R; i ++){
			for(j = 1; j <= J; j ++){
				cin >> points[i][j];
			}
		}
		for(i = 1; i <= R; i ++){
			for(j = 1; j <= J; j ++){
				players[j] += points[i][j];
			}
		}
		for(i = 1; i <= J; i ++){
			if(players[i] > max){
				max = players[i];
				if(pos1 == 0) pos1 = i;
				else pos2 = i;
			}
		}
	}
	
	cout << pos1 << "\n" << pos2;
	
	
	return 0;
} */
#include <iostream>
using namespace std;

int main() {
    int J, R;
    while (cin >> J >> R && J && R) {
        // int vp[J] = {0};
        int vp[512] = {0};
        int winner = 0;
        int tmp = 0;
        for (int i = 0; i < J * R; ++i) {
            cin >> tmp;
            int cur = i % J;
            vp[cur] += tmp;
            if (vp[cur] >= vp[winner])
                winner = cur;
        }
        cout << winner + 1 << endl;
    }
    return 0;
} 
