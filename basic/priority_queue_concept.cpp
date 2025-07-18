#include<iostream>
#include<queue>  // for priority_queue

using namespace std;

int main() {

    priority_queue<int> pq;  // Create a max-heap priority queue


    pq.push(10);  // Insert elements into the priority queue
    pq.push(2);
    pq.push(5);
    pq.push(12);

    while(!pq.empty()) {  // While the priority queue is not empty
        cout << pq.top() << " ";  // Print the top element (largest element)
        pq.pop();  // Remove the top element
    }


    // here i create the reverse priority queue
    priority_queue <int , vector<int> , greater<int>> q;
    /*
     here greater <int> is functor which is used to compare the elements of the priority queue
    */

    
    return 0;
}


/*
 priority_queue is a container adaptor that provides constant time lookup of the largest (or smallest) element.
 it usges a max heap structure or min heap structure. which is binary heap based on the comparator.
 It is defined in the <queue> header file.
 max heap : the largest element is at the top of the heap.
 min heap : the smallest element is at the top of the heap.
 largest element is at the top of the heap. => in the priority queue, the largest element is at the top.

*/