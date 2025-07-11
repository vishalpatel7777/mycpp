/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n ; i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x);
    int a,b;
    cin >> a>>b;
    v.erase(v.begin()+a-1, v.begin()+b-1);
    
    int size = v.size();
    cout<<size<<endl;
    for(int x:v){
        cout<<x<<" "; 
    }
    
    
    return 0;
}
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int& x : v){
        cin>>x;
    }
    
    int x;
    cin>>x;
    v.erase(v.begin()+(x-1));
    
    
    int a,b;
    cin >> a>>b;
    v.erase(v.begin()+(a-1), v.begin()+(b-1));
    
    int size = v.size();
    cout<<size<<endl;
    for(int x:v){
        cout<<x<<" "; 
    }
    
    
    return 0;
}


/*
hackerrank problem: https://www.hackerrank.com/challenges/vector-erase/problem
*/