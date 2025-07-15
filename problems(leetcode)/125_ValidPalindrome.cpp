/*
125. valid palindrome from leetcode

*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


bool isAlphaNum(char ch){
    if((ch >= '0' && ch<= '9') || (ch>='a' && ch<='z')){
        return true;
    }
    return false;
}

bool isPalindrome(string s ){
    int start =0 , end = s.length() - 1;
    while(start<end){
        if(!isAlphaNum(s[start])) {
            start++;
            continue;
        }
        if(!isAlphaNum(s[end])) {
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isPalindromewithinbuilt(string s ){
    int start =0 , end = s.length() - 1;
    while(start<end){
        if(!isalnum(s[start])) {
            start++;
            continue;
        }
        if(!isalnum(s[end])) {
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

 

int main() {
    string s  ;
    cout<<"Enter a string : " ;
    getline(cin, s);
    isPalindrome(s) ? cout << "The string is a palindrome." << endl : cout << "The string is not a palindrome." << endl;
    cout<<"Using STL functions to check palindrome : " << endl;
    isPalindromewithinbuilt(s) ? cout << "The string is a palindrome." << endl : cout << "The string is not a palindrome." << endl;

    return 0;
}