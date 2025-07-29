// leetcode : 516. Longest Palindromic Subsequence

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string r = s ; 
        reverse(r.begin(), r.end());
        int m= s.size();

        vector<vector <int>> dp (m+2 , vector <int> (m+2 , 0));

        for(int i=m ; i>0 ; i--){
            for(int j =m ;j>0 ; j--){
                if(s[i-1] == r[j-1]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                }
                else{
                    dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return dp[1][1];
    }
};


/*
 in this we did like to find the longest palindomic subsequence .. 
  first we reversed the string cause for example if we have
  string s = "bbbab" then reversed string r="babbb"
  so now it will gonna help to find the longest common sequence ... "bbbb" so output gonna be 4
*/