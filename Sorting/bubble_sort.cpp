/*
    Program: Bubble Sort in C++
    ----------------------------
    This program performs the following operations:
    1. Takes an array of integers as input from the user.
    2. Displays the original (unsorted) array.
    3. Sorts the array in ascending order using the Bubble Sort algorithm.
    4. Displays the sorted array.

    Note:
    - Bubble Sort repeatedly compares adjacent elements and swaps them
      if they are in the wrong order.
    - The time complexity of Bubble Sort is O(n^2) in the worst case.
*/


#include <bits/stdc++.h>
using namespace std;

// Function to perform bubble sort
void bubble_sort(vector<int>& arr, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    vector<int> arr(size);


    // Input the elements of the array
    cout << "Enter the elements of the array:";
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }

    // Display the original array
    cout << "The original array is: ";
    for (int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;

    // Sort the array using bubble sort
    bubble_sort(arr, size);
    cout << "The sorted array is: ";
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
