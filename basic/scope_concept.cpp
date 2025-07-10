#include<iostream>
using namespace std;

int a=5;
// Global variable a is declared and initialized to 5

int main() {
    // int a=10;
    if (a>0) {
        int x =10 ;
        cout<<x<<endl; 
    }


    // cout<<x<<endl;   // here it shows like x not declared 

    {
        int y = 20;
        cout<<y<<endl; 
    }
    // cout<<y<<endl;   // here it shows like y not declared
    cout<<a<<endl;  // if there is no local variable a, it will print 5



    return 0;
}