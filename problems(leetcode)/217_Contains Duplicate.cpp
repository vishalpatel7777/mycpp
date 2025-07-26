// leetcode : https://leetcode.com/problems/contains-duplicate/

// Method 1: Using Sorting
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int prev= -1 ;
        for(int i : nums){
            if(prev == i) {
                return true;
            }
            prev= i ;
        }
    
    return false;
    }
};

// Time Complexity: O(n log n) due to sorting


// Method 2 : Using Hash Set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> s ;
       s.reserve(nums.size());
       for(int x : nums ){
         if(!s.insert(x).second){
            return true;
         }
       }
    
    return false;
    }
};
