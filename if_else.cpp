#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter your age : " ;
    cin >> n ;

    if(n < 18)
    {
        cout << "You are a minor." << endl;
    }
    else if(n >= 18 && n < 60)
    {
        cout << "You are an adult." << endl;
    }
    else
    {
        cout << "You are a senior citizen." << endl;
    }
    return 0;
}

/*
  so there is 5 type of conditional statements 
  1. if - else 
  2. if - else if - else
  3. nested if - else
  4. switch case
  5. conditional operator (ternary operator)  =>  a? b : c; 
       
*/