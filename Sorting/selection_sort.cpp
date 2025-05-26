#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    for (int i = 0; i < size - 1;i++){
        int selectionIndex = i;
        for (int j = i + 1; j < size;j++){
            if (arr[j]< arr[selectionIndex]){
                selectionIndex = j;
            }
        }
        swap(arr[i], arr[selectionIndex]);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    printf("Enter array size:");
    cin >> size;
    int arr[size];
    printf("Enter array elements:");
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    selectionSort(arr, size);
    printf("Sorted array:");
    printArray(arr, size);
    return 0;
}