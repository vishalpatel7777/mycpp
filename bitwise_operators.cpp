#include<iostream>
using namespace std;

int main() {

    int a = 5;   // 0101 in binary
    int b = 3;   // 0011 in binary

    cout << "Initial values:" << endl;
    cout << "a: " << a << ", b: " << b << endl;


    cout << "Bitwise AND: " << (a & b) << endl;  // 1
    cout << "Bitwise OR: " << (a | b) << endl;   // 7
    cout << "Bitwise XOR: " << (a ^ b) << endl;  // 6
    
    cout << "Bitwise NOT of a: " << (~a) << endl; // -6
    cout << "Bitwise NOT of b: " << (~b) << endl; // -4

    cout << "Left Shift a by 1: " << (a << 1) << endl; // 10
    cout << "Right Shift a by 1: " << (a >> 1) << endl; // 2
    cout << "Left Shift b by 1: " << (b << 1) << endl; // 6
    cout << "Right Shift b by 1: " << (b >> 1) << endl; // 1

    return 0;
}



/*
Bitwise operators in C++ allow you to perform operations on the individual bits of integer types.
The operators include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).

=> operator precedence is important when using bitwise operators, as they can affect the outcome of expressions.
 !,+,-  >   *, /, %   >  +,-  >  <<, >>   >    <, <=, >, >=   >   ==, !=   >   &, ^, |   >   &&, ||   >   =, +=, -=, *=, /=, %=, &=, ^=, |=

 left -> right


 */