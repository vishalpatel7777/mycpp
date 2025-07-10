#include<iostream>
using namespace std;


int search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i+1; // return the index of the found element
        }
    }
    return -1; // return -1 if the element is not found
}

void reverseArray ( int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while(start < end) {
        // swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // print the reversed array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[6] = {1,2,5,4,6,7};

    cout << "Linear Search : "<<endl;
    if(search(arr, 5, 3) != -1) {
        cout << "Element found at index: " << search(arr, 5, 3) << endl;
    } else {
        cout << "Element not found" << endl;
    }

    cout << "Reversing the array: " << endl;
    reverseArray(arr1, 6);


    return 0;
}



/*
linear search =>   it is a simple search algorithm that checks each element in the array sequentially until it finds the target value or reaches the end of the array.
=>  Time Complexity: O(n) where n is the number of elements in the array.  

reverse array =>  it is a simple algorithm that swaps the elements of the array from the start and end until it reaches the middle of the array.

*/