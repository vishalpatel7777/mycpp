#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    vector<int>v(n);
    for(int& x : v){
        cin>>x;
    }
    
    int q;
    cin>>q;
    for(int i=1 ; i<=q ; i++)
    {
      int x ;
      cin>>x;
      auto pos = lower_bound(v.begin(), v.end(), x); 
      int index = pos - v.begin();  
      if(pos != v.end() && *pos == x ){
        cout<<"Yes " <<index + 1<<endl;
      }     
      else{
        cout<<"No "<<index +1 <<endl;
      }
    }
    
    return 0;
}


/*
hackerank problem https://www.hackerrank.com/challenges/lower-bound-stl/problem

      auto pos = lower_bound(v.begin(), v.end(), x); // find the first position where x can be inserted without violating the order
      int index =   pos - v.begin();  // in this  v.begin() is the iterator pointing to the first element of the vector v and pos is the iterator pointing to the first element that is not less than x
      // if x is not present in the vector, pos will point to the first element that is greater than x
        // if x is present in the vector, pos will point to the first element that is equal to x
        // if x is less than the first element of the vector, pos will point to the first element of the vector
        // if x is greater than the last element of the vector, pos will point to the end of the vector
        /// here index is the position of x in the vector v if x is present in the vector v
*/