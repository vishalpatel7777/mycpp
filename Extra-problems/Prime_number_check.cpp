#include<iostream>
using namespace std;

int main(){
    long long n;
    cout << "Enter a number to check if it is prime: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << n << " is not a prime number." << endl;
            return 0;
        }
    }
   // other way ..for small numbers
    /*
       for(int i =2 ; i<n ; i++){
        if(n%i==0){
            cout<<n<<" is not a prime number."<<endl;
            return 0;
        }
    */

    cout << n << " is a prime number." << endl;
    return 0;
}


/*
=> A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
=> 
Feature	          Why It's Important
n % i == 0	      Checks all real divisors properly
i * i <= n	      Optimized loop: only check up to square root
long long	      Supports large inputs like 999999999999
if (n <= 1)	      Handles edge cases (0 and 1 are not prime)

=> it can even check below stuff 
2147483647 : 	2147483647 is a prime ✅
999999  : 	999999 is not a prime ❌
*/