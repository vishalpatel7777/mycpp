 // leetcode : https://leetcode.com/problems/roman-to-integer/
 class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
         unordered_map <char, int > m = { {'I' , 1}, {'V' , 5}, {'X',10}, {'L', 50}, {'C',100} , {'D',500} , {'M', 1000}};
        for(int i=0 ; i<s.size() ; i++){
            if(m[s[i]] < m [s[i+1]] && i+1 <s.size()){
                res -= m[s[i]];
            }
            else{
                res+= m[s[i]];
            }
        }
        return res;
    }
};