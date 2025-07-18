#include<iostream>
#include<stack> // for stack
using namespace std;

int main() {
    stack<int> s; // create a stack of integers


    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element: " << s.top() << endl; // prints the top element (3)

    s.pop(); // removes the top element (3)

    cout << "Top element after pop: " << s.top() << endl; // prints the new top element (2)

   s.push(4);
   s.push(5);
   
//    while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
//    }
//    cout<<endl;

   stack<int> s2; // create another stack of integers
 

   s2.swap(s); // swap contents of s2 and s
   cout<<"swapped stack"<<endl;
    while(!s2.empty()){
    cout<<s2.top()<<" ";
    s2.pop();
    }    





    return 0;
}


/*
 stack is a data structure that follows the Last In First Out (LIFO) principle.
 element add and remove from the top of the stack.

*/