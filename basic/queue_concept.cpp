#include<iostream>
#include<queue>  // for queue
using namespace std;

int main() {

    queue <int> q;  // Declare a queue of integers

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    while(!q.empty()) {
        cout << q.front()<<" ";  // Access the front element
        q.pop();  // Remove the front element
    }
    cout << endl;
    

    return 0;
}

/*
 queue is a data structure that follows the First In First Out (FIFO) principle.
 there is front and rear in queue. Elements are added at the rear and removed from the front.


*/