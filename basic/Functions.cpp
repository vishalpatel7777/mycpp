#include<iostream>
using namespace std;


int sum (int a, int b) {
    return a + b;
}
int main() {

    int n, m;
    cout << "Enter the number you want to sum: ";
    cin >> n >> m;
    cout << "The sum of " << n << " and " << m << " is: " << sum(n, m) << endl;


    return 0;
}


/*
=> Function : A function is a block of code that performs a specific task. It can take inputs, process them, and return an output. Functions help in organizing code, making it reusable and easier to read.
=> in fuction we can pass value by value or by reference.
pass by value : When we pass a variable to a function, a copy of the variable is made. Changes made to the parameter inside the function do not affect the original variable.
pass by reference : When we pass a variable by reference, we pass the address of the variable. Changes made to the parameter inside the function will affect the original variable.
*/