#include<iostream>
#include<map>  // for map
#include<unordered_map>  // for unordered_map

using namespace std;

int main() {
 
    map<string,int> m ;
    m["apple"] = 10;  // Insert elements into the map
    m["banana"] = 20;
    m["orange"] = 30;
    m["grape"] = 15;
    m["kiwi"] = 25;
    m["banana"] = 22;  // Update value for key "banana"

    m.insert({"mango", 18});  // Insert another element using insert method
    for(auto p: m ){
        cout << p.first << " : " << p.second << endl;  // Print key-value pairs
    }


    if(m.find("apple") != m.end()) {  // Check if key "apple" exists
        cout << "Key 'apple' found with value: " << m["apple"] << endl;
    } else {
        cout << "Key 'apple' not found." << endl;
    }



    
    // multi map
    cout<<"Here the multi map : "<<endl;
    multimap <string, int> mm;

    mm.emplace("apple", 10);
    mm.emplace("banana", 20);
    mm.emplace("banana", 25);  // Duplicate key allowed in multimap
    mm.emplace("banana", 24);

    mm.erase(mm.find("banana"));  // Erase one entry with key "banana" with value 20 will remove
    // mm.erase("banana");  // Erase all entries with key "banana"

    for(auto p: mm) {
        cout << p.first << " : " << p.second << endl;  // Print key-value pairs
    }


    // unordered map
    cout<<"Here the unordered map : "<<endl;
    unordered_map<string, int> um;
    um["apple"] = 10;
    um["banana"] = 20;
    um["orange"] = 30;
    um["grape"] = 15;

    for(auto p: um) {
        cout << p.first << " : " << p.second << endl;  // Print key-value pairs
    }

    return 0;
}

/*
 Map : map is an associative container that stores elements in key-value pairs.
 here key is unique and value can be duplicate.
 
 there is the other type of maps : multi map , unordered map
 Multi map : multi map is an associative container that allows multiple values for the same key.
 unordered map : unordered map is an associative container that stores elements in key-value pairs, but does not maintain any specific order of the keys.
 unordered map is mostly used in DSA    

 map is implemented as self balancing tree 
unordered_map is implemented as hash table
Multi map is implemented as self balancing tree

time complexity : 
- map: O(log n) for insert, erase, find
- unordered_map: O(1) on average for insert, erase, find
- multimap: O(log n) for insert, erase, find

*/