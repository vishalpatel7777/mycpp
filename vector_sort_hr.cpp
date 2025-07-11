#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
   int n;
   cin >> n;
   vector<int>v;
   
   for(int i=0 ; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
   sort(v.begin(), v.end());
   
   for(int x: v){
    cout<< x <<" ";
   }
   
    return 0;
}

/*
 hackerank problem link: https://www.hackerrank.com/challenges/vector-sort/problem
*/