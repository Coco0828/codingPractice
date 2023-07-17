#include <iostream>
#include <sstream>
#include <map>
using namespace std ;
map<string, char> mp = {{".-",'A'},{"-...",'B'},{"-.-.",'C'},{"-..",'D'},{".",'E'},{"..-.",'F'},{"--.",'G'},{"....",'H'},{"..",'I'},{".---",'J'},{"-.-",'K'},{".-..",'L'},{"--",'M'},{"-.",'N'},{"---",'O'},{".--.",'P'},{"--.-",'Q'},{".-.",'R'},{"...",'S'},{"-",'T'},{"..-",'U'},{"...-",'V'},{".--",'W'},{"-..-",'X'},{"-.--",'Y'},{"--..",'Z'}};

int main() {
    int j;
    while(cin >> j) {
        cin.ignore();
        for( nt i = 0; i < j ; i++){
            stringstream s;
            string ss, sss, ans;
            
            getline(cin , ss);
            s.str(ss);
            
            while(s >> sss){
                ans += mp[sss];
            }
            cout << ans << endl;
            s.clear();
        }
    }
}
