#include<iostream>
#include<algorithm> // for all algorithms
#include<vector> 
using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<<"max element : "<<*max_element (v.begin(), v.end())  <<endl;
    cout<<"min element : "<<*min_element (v.begin(), v.end())  <<endl;
    cout<<"binary search for 5 : "<<binary_search(v.begin(), v.end(), 5) <<endl;

    int n=15;
    cout<<"count of 1s in 15 : "<<__builtin_popcount(15) <<endl; // count set bits in 15

    return 0;
}

/*
// max . min element 
 
max_element(v.begin(), v.end());
min_element(v.begin(), v.end());

// binary search 

binary_search(v.begin(), v.end(), 5); // returns true if 5 is present

// count set bits
count_ones(5); // returns 2

*/