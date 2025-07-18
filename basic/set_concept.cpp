#include<iostream>
#include<set>  // for set
#include<unordered_set>  // for unordered_set

using namespace std;

int main() {

    set<int> s;  // Declare a set of integers    

    s.insert(10);  // Insert elements into the set
    s.insert(20);
    s.insert(30);
    s.insert(20);  // Attempt to insert a duplicate value (will be ignored)

    for(auto val : s ) {  // Iterate through the set
        cout << val << " ";  // Output: 10 20 30
    }
    
    cout<<endl;
    cout<<"The size of the set is: "<<s.size()<<endl;  // Output the size of the set    

    // additional function set have
    cout << "Is 20 present in the set? " << (s.count(20) ? "Yes" : "No") << endl;  // Check if an element is present
    cout<<"lower bound of 20: "<<*s.lower_bound(20)<<endl;  // Get the lower bound of an element
    cout<<"upper bound of 20: "<<*s.upper_bound(20)<<endl;  // Get the upper bound of an element
    cout<<"the lower bound of not existing value : "<<*s.lower_bound(23)<<endl;  
    cout<<"the lower bound of the valuse with more than set value : "<<*s.lower_bound(60)<<endl;  // it return the end of the set value = 3



    // multi set
    cout<<"------------------multiset------------------"<<endl;
    multiset<int> ms;  // Declare a multiset of integers
    ms.insert(10);  // Insert elements into the multiset
    ms.insert(20);
    ms.insert(30);
    ms.insert(20);  // Insert a duplicate value (allowed in multiset)

    for(auto val : ms ) {  // Iterate through the multiset
        cout << val << " ";  // Output: 10 20 20 30
    }

    cout<<endl;

    // unordered set
    cout<<"------------------unordered set------------------"<<endl;
    unordered_set<int> us;  // Declare an unordered set of integers
    us.insert(10);  // Insert elements into the unordered set
    us.insert(20);
    us.insert(30);
    us.insert(20);  // Attempt to insert a duplicate value (will be ignored)

    for(auto val : us ) {  // Iterate through the unordered set
        cout << val << " ";  // Output: 10 20 30 (order may vary)
    }


    return 0;
}


/*
 set : A set is a collection of unique elements, meaning it does not allow duplicate values. It is typically implemented as a balanced binary search tree, which allows for efficient insertion, deletion, and lookup operations.

 multi set: A multiset is similar to a set, but it allows duplicate values. It is also implemented as a balanced binary search tree, and it maintains the order of elements based on their values.
 unorded set: An unordered set is a collection of unique elements that does not maintain any specific order. It is typically implemented using a hash table, which allows for average constant time complexity for insertion, deletion, and lookup operations.
 
 time complexity : 
  - set : O(log n) for insertion, deletion, and lookup operations.
  - multiset : O(log n) for insertion, deletion, and lookup operations.
  - unordered set : O(1) on average for insertion, deletion, and lookup operations, but can degrade to O(n) in the worst case due to hash collisions.

  this is very similar to map

*/  