#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    for(int i =0 ; i< 5 ; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
    // cout<<arr[-1];  // it shows garbage  values 


     {
        // find the smallest & largest  values from the array 
        int a[5] = {5, 4, 3, 2, 1};

        int small = 100;
        int max = 0;
        cout << "Initial Array  : "<<endl;
        for(int i=0 ; i <5; i++){
            cout << a[i] << " "; // print the array values
            if(a[i] < small){
                small = a[i]; // store the index of the smallest value 
            }
            if (a[i]>max){
                max = a[i]; // store the index of the largest value 
            }
        } 
        cout << endl; 
        cout << "Smallest value is: " << small << endl; 
        cout << "Largest value is: " << max << endl;
     }

    return 0;
}



/*
Array 
=> array index starts with 0 
=> 
*/