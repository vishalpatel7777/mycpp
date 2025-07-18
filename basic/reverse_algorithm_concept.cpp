#include<iostream>
#include<algorithm> // for reverse function
#include<vector> // for vector
using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5,6,7,8,9,10};

    // reverse(v.begin(), v.end());
    // for(int val  : v){
    //     cout << val << " ";
    // }
    // cout << endl;

    // i can also do like range  , make sure not do like end() + 3 it not gonna give anything other than the memory address
    reverse(v.begin() + 1, v.begin() + 6);
    for(int val  : v){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}


/*
to reverse there is inbuild function in C++ STL
we need to include <algorithm> header file



*/