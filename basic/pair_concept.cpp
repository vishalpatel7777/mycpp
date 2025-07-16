#include<iostream>
#include<vector>
#include<utility> // For std::pair
using namespace std;

int main() {

        pair<int , int > p = {10, 20};
        pair<int, string> p1 = {1, "Hello"}; // Pair of int and string
        pair<int , pair<int, int>> p2 = {1, {2, 3}}; // Pair of int and another pair


        cout<<p.first<<endl;  // Accessing the first element of the pair
        cout<<p.second<<endl; // Accessing the second element of the pair

        cout<<"pair of int and pair : "<<endl;    
        cout<<p2.first<<endl; // Accessing the first element of the outer pair
        cout<<p2.second.first<<endl; // Accessing the first element of the inner pair
        cout<<p2.second.second<<endl; // Accessing the second element of the inner pair    
   

        cout<<"vector of pairs : "<<endl;
        vector<pair<int, int>> vec = {{1,2} , {2,4} , {3,2}}; // Vector of pairs

        vec.push_back({4, 8}); // Adding a new pair to the vector , it creates a temporary pair object
        vec.emplace_back(5, 10); // Adding a new pair using emplace_back , it create in-place object 

        for(auto p : vec){
            cout<<p.first<<" "<<p.second<<endl; // Accessing elements of each pair in the vector
        }
    return 0;
}


/*
 pair is a container that stores two heterogeneous objects as a single unit.
 it is from utility header file.  
 if we want to store two different data types in a single variable, we can use pair.
A pair is a simple container defined in the C++ Standard Library that can hold two values, which can be of different types. It is defined in the `<utility>` header file.

*/