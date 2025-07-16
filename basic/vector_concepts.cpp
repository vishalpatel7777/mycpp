#include<iostream>
#include<vector>
using namespace std;


int main() {

    vector<int> :: iterator it; // iterator for vector<int>
    vector <int > v1 = {1, 2, 3, 4, 5};

    for(it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    }

    cout<<endl;
    for(auto it=v1.rbegin(); it != v1.rend(); it++) {
        cout << *it << " ";
    }

    return 0;
}