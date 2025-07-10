/*
leetcode problem 136: Single Number
// https://leetcode.com/problems/single-number/
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1

Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
*/

// here the logic only....

class solution{
    public:
      int singleNumber(vector<int>& nums) {
          int ans = 0;
          for(int i = 0; i < nums.size(); i++) {
              ans ^= nums[i]; // XOR operation
          }
          return ans; // the result will be the single number
      }
}


/*
 it is only gonna work if in the array has exact 2 occurrences of each number except one. 
 like [2,2,1] or [4,1,2,1,2] it gonna work but if array is like [2,2,1,1,1,3] or [4,1,2,1,2,2] it will not work.
*/