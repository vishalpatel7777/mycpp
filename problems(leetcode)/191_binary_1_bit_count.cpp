class Solution {
public:
    int hammingWeight(int n) {
      vector<int> v;

      while(n>0){
        int rem = n %2 ;
        v.push_back(rem);
        n=n/2;  
      }   
      reverse(v.begin(), v.end());
      int count=0;
      for(int bit : v){
        if (bit == 1){
            count++;
        }
      }
      return count;
    }
};


// Time Complexity: O(log n)


class Solution {
public:
    int hammingWeight(int n) {
        int count =0 ;
        while (n){
            n &= (n-1);
            count++;
        }
        return count;
    }
};

/*
 this is a better solution using brian kernighan's algorithm 
This algorithm works by repeatedly flipping the least significant bit that is set to 1 to 0, and counting how many times this operation is performed until the number becomes 0.
// Time Complexity: O(k) where k is the number of 1 bits in n
// Space Complexity: O(1) since we are using a constant amount of space
// This is more efficient than the previous solution, especially for large numbers with few 1 bits.
  n &= (n-1) flips the least significant 1 bit to 0.
*/



/*
leetcode : https://leetcode.com/problems/number-of-1-bits/
*/