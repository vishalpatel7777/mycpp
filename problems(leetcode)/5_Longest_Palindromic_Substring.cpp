//leetcode : https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        int reslen=0;
        for(int i=0 ; i<s.length(); i++){
            int l=i , r=i;
            while (l >= 0 && r <s.length() && s[l]==s[r]){
                if((r-l+1) > reslen){
                    res= s.substr(l , r-l+1);
                    reslen = r-l+1;
                }
                l -=1;
                r +=1 ;
            }

            l= i , r =i+1 ;
            while (l >= 0 && r <s.length() && s[l]==s[r]){
                if((r-l+1) > reslen){
                    res= s.substr(l , r-l+1);
                    reslen = r-l+1;
                }
                l -=1;
                r +=1 ;
            }
        }
        return res;
    }
};



/*
 in this what i did ... : 
 i created one result string and result string length .. 
 then   i take left and right 

*/