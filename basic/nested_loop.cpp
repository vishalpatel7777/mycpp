#include<iostream>
using namespace std;

int main() {

    for(int i =0 ; i<5 ; i++){
        for(int j=0; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

/*
 => pattern printing with nested loop 
 i want to print 
  *
  * * 
  * * *
  * * * *
  * * * * * *
  
*/