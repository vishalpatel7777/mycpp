// leetcode : https://leetcode.com/problems/longest-common-subsequence/
    class Solution {
    public:
        int longestCommonSubsequence(string text1, string text2) {
            int m= text1.size();
            int n= text2.size();
            vector<vector<int>> dp (m+2 ,vector<int> (n+2, 0) ) ;

            for( int i = m ; i >0 ; i --){
                for (int j= n ; j>0 ; j--){
                    if(text1[i-1] == text2[j-1]){
                        dp[i][j] = 1 + dp[i+1][j+1];
                    }
                    else{
                        dp[i][j] = max(dp[i][j+1] , dp[i+1][j]);
                    }
                }
            }
            return dp[1][1];
        }
    };

/*
if text1 = "abcde" , text2="ace"
output is 3 because LCS is "ace" , which has 3 characters
 dp size is (m+2) x (n+2) to avoid out of bound errors : dp[6][4]
 here m= 5, n=3
 -> if i and j is max then i=5, j=3 
   so in that case dp[i][j] = 1 + dp[i+1][j+1]; => dp[5][3] = 1 + dp[6][4] => dp[5][3] = 1 + 0 = 1
   we return dp[1][1] because we start from the end of the string and we want the result for the whole string
// Time Complexity: O(m*n)
*/