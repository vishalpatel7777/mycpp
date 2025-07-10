#include<iostream>
using namespace std;

int number_to_binary(int n) {
    int ans = 0, pow = 1;
    while (n > 0) {
        int remainder = n % 2;
        ans += remainder * pow;
        pow *= 10;
        n /= 2;
    }
    return ans;
}

string number_to_hexadecimal(int n) {
    if (n == 0) return "0";

    string hex_chars = "0123456789ABCDEF";
    string result = "";

    while (n > 0) {
        int remainder = n % 16;
        result = hex_chars[remainder] + result;
        n /= 16;
    }

    return result;
}


int binary_to_decimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int last_digit = binary % 10;
        binary /= 10;    // assignment operator used to update binary
        decimal += last_digit * base; 
        base *= 2;
    }
    return decimal;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Binary representation: " << number_to_binary(n) << endl;
    cout << "Hexadecimal representation: " << number_to_hexadecimal(n) << endl;


    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal representation of binary " << binary << ": " << binary_to_decimal(binary) << endl;

    return 0;
}



/*
=> number to binary : Converts a decimal number to its binary representation.
=> number to hexadecimal : Converts a decimal number to its hexadecimal representation.
=> binary to decimal : Converts a binary number to its decimal representation.

*/