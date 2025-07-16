#include<iostream>
// i have to include that list 
#include<list>

using namespace std;

int main() {

    list<int> l1 = {1, 2, 3, 4, 5};

    l1.push_front(0); // adding element at the front
    l1.push_back(6);  // adding element at the back

    for(int val : l1){
        cout<<val<<" " ; 
    }
    cout<<endl;

    l1.pop_back(); // rmeoving element from the back
    l1.pop_front(); // removing element from the front
    cout<<"After popping front and back: " << endl;
    for(int val : l1){
        cout<<val<<" " ; 
    }
    return 0;
}


/*
 in list we can add from front and back ..
 difference between vector and list is that vector is dynamic array and list is doubly linked list.
*/