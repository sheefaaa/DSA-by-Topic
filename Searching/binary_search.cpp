/*
    Program: Bubble Sort and Binary Search in C++
    ----------------------------------------------
    This program performs the following operations:
    1. Takes an array of integers as input from the user.
    2. Sorts the array using the Bubble Sort algorithm.
    3. Prompts the user to enter a search key.
    4. Searches for the key in the sorted array using Binary Search.
    5. Displays the index of the found element or a message if not found.

    Note:
    - Bubble Sort is used for sorting the array in ascending order.
    - Binary Search is used for efficient searching on the sorted array.
*/


#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int binary_search(int arr[], int size, int key){
    int left = 0, right = size - 1, mid;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    // Sort the array before binary search
    bubble_sort(arr, size);
    
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    
    int result = binary_search(arr, size, key);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
