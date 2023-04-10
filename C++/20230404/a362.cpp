#include <iostream>
#include <algorithm>
using namespace std;

struct box{
    int h,w,l;
};

bool cmp(box a,box b){
    if(a.h != b.h)
        return a.h < b.h;
    if(a.w != b.w)
        return a.w < b.w;
    return a.l < b.l;
}
int main(){
    int n;
    while(cin >> n){
        box b[n];
        for(int i = 0; i < n; i ++){
            cin >> b[i].h >> b[i].w;
            b[i].l = i;
        }
        sort(b, b+n, cmp);
        int sum =0 ;
        for(int i = 0; i < n; i++)
            sum += abs(b[i].l-i);
        cout << sum << endl;
    }
}

