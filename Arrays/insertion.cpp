//insert element in an array
#include <bits/stdc++.h>
using namespace std;

int insertElement(int size, int arr[], int value, int position);

int main() {
   int size;
   cout << "Enter array size: ";
   cin >> size;

   int arr[size];
   cout << "Enter array element: ";
   for(int i=0; i<size;i++){
       cin >> arr[i];
   }
   
   int value;
   cout << "Enter value to insert: ";
   cin >> value;

    int position;
    cout << "Enter index number to insert: ";
    cin >> position;

    cout << "Original array is: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    size=insertElement(size,arr,value,position);

    cout << "After insertion the array is: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}

int insertElement(int size, int arr[], int value, int position){
    for(int i= size; i>position; i--){
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    return size+1;  
}

