#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Qsort(vector<int> &list, int l,int r){
    int i,j,key;
    if(l<r){
        i = l+1;
        j = r;
        key = list[l];
        while(i<=j){
            while(list[i]<key){
                i++;
            }
            while(list[j]>key){
                j--;
            }
            if(i<j){
                swap(list[i],list[j]);
            }
        }
        swap(list[j],list[l]);
        Qsort(list,l,j-1);
        Qsort(list,j+1,r);
    }
}

void traverse(vector<int> input){
    vector<int>::iterator it;
    for (it = input.begin(); it != input.end(); ++it)
        cout << *it << " ";
}

int main()
{
    int array[4] = {1,3,2,4};
    vector<int> input(array, array+4);
    Qsort(input, 0, 3);
    traverse(input);

    return 0;
}
