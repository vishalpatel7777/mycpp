class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n & (n-1)) == 0;
    }
};


/*
leetcode : 231 https://leetcode.com/problems/power-of-two/


in every case the n & n-1 = 0 if n is a power of two.
// Time Complexity: O(1)

*/