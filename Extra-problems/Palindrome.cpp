// here i was writing the code to check whether a string is palindrome or not

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string str = "vishal";
    string original_string = str;
    // method : 1 
    // int n = str.length();
    // bool isPalindrome = true;
    // while(n > 0) {
    //     if (str[n - 1] != str[str.length() - n]) {
    //         isPalindrome = false;
    //         break;
    //     }
    //     n--;
    // }
     reverse(str.begin(), str.end());
     string rev = str;
     if (original_string == rev) {
         cout << "The string is a palindrome." << endl;
     } else {
         cout << "The string is not a palindrome." << endl;
     }
    return 0;
}



/* 
 here if i use that bool with loop then time complexity => o(n) and space complexity => o(1)
 but if  i use that stl reverse function then time complexity => o(n) + o(n) (because copy of real string - original_string is created) and space complexity => o(n)
*/