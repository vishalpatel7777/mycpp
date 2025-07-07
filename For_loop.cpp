#include<iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n<=0) {
        cout << "Please enter a positive integer." << endl;
        return 1; 
    }
    // For loop to print numbers from 1 to n
    for(int i =1 ; i<=n ; i++){
      cout<<i<<" ";}
   
    return 0;
}