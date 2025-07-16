#include<iostream>
#include<deque>  // for deque
#include<list> // for list
using namespace std;

int main() {

    deque<int> d1 = {1, 2, 3, 4, 5};
    list<int> l1={1,2,3,4,5};

    for(int v: d1) {
        cout << v << " ";
    }
    cout << endl;

    d1.push_front(0); // adding element at the front
    d1.push_back(6);  // adding element at the back

    cout << "After adding elements at front and back: " << endl;
    for(int v:d1){
        cout<<v<<" ";
    }
    cout << endl;

    d1.pop_front(); // removing element from the front
    d1.pop_back();  // removing element from the back

    cout << "After popping front and back: " << endl;
    for(int v: d1){
        cout<<v<<" ";

    }
    cout << endl;
    cout<<d1[2]<<endl;  // accessing random element in deque
    //   cout<<l1[2]<<endl;  // accessing random element in list (not allowed, will give error)


    return 0;
}


/*
    difference between deque and vector is that deque is double ended queue and vector is dynamic array.
    difference between deque and list is that deque is double ended queue and list is doubly linked list.

    deque => means  double ended queue
    dequeue => it pop the element
    
    deque allow to access random element but the list not allow that


*/