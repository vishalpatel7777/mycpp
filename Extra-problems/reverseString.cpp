// here i am going to use 2 method to reverse a string , 1st one is using character array and 2nd is using reverse function

#include<iostream>
#include<string>
#include<algorithm> // For std::reverse
using namespace std;

int main() {

    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Use getline to allow spaces in the string

    //m:1
    cout<<"here i used the character array to reverse the string"<<endl;
    int n = str.length();
    int st=0, end=n-1;
    while(st<end){
        swap(str[st++], str[end--]);
    }
    cout << "Reversed string using character array: " << str << endl;

    //m:2
    string str2 = str; 
    cout<<"here i use the reverse function to reverse the string"<<endl;
    reverse(str2.begin(), str2.end());
    cout << "Reversed string using reverse function: " << str2 << endl;

    return 0;
}