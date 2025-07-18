#include<iostream>
#include<algorithm> // for next_permutation
using namespace std;

int main() {

    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << endl;

    // there is also prev_permutation
    string s2 = "cba";
    prev_permutation(s2.begin(), s2.end());
    cout << s2 << endl;

    return 0;
}

/*
 next permutation concept : The next permutation of a sequence is the next lexicographically greater permutation of its elements. If no such permutation exists (i.e., the sequence is sorted in descending order), the next permutation is the lowest possible order (i.e., sorted in ascending order).
// Example: For the sequence [1, 2, 3], the next permutation is [1, 3, 2]. If the sequence is [3, 2, 1], the next permutation is [1, 2, 3].

*/