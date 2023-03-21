#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[],int n){
    for(int i = 0;i < n-1;i ++){
        int min_idx = i;
        for(int j = i+1;j < n;j ++){
            if(arr[min_idx] > arr[j]) min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

void bubbleSort(int arr[],int n){
    for(int i = 0;i < n-1; i++){
        for(int j = 0; j < n-i-1;j ++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {12,11,13,5,6};
    //insertionSort(arr, 5);
    //selectionSort(arr, 5);
    bubbleSort(arr, 5);
    for(int i = 0; i < 5; i ++) cout << arr[i] << ",";
    
    return 0;
}
