//selection sort
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int size, int arr[]);

int main(){
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter Array elements: ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "Original array is: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    selection_sort(size, arr);

    cout << "After selection sort the array is: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void selection_sort(int size, int arr[]){
    for(int i=0; i<size-1;i++){
        int smallestIndex=i;
        for(int j=i+1; j<size;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[smallestIndex];
        arr[smallestIndex]=temp;
    }
}
