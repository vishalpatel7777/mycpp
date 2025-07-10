#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v ={1,2,3} ;
    vector <int> v1(5, 10); // vector of size 5 with all elements initialized to 10
    cout<< v[0] << endl; 
    cout<< v1[0] << endl;
    cout<< v1[1] << endl;
    cout<< v1[2] << endl;
    cout<< v1[3] << endl;
    cout<< v1[4] << endl;
    cout<< v1[5] << endl;  // this will print garbage value because it is out of range
    cout<< v1[6]<<endl;


    cout<<"Now i am going to use For each loop : " <<endl;
    for(int i : v){  // for each loop to iterate through the vector
        cout<<i<<" "; 
    }
    cout<<endl;

    cout<<"Size of vector V : "<<v.size()<<endl; // size of vector v
    v.push_back(4); // use to add an element at the end of the vector
    cout<<"Size of vector V after adding 4 : "<<v.size()<<endl;
    v.pop_back(); // use to remove the last element of the vector
    cout<<"Size of vector V after removing last element : "<<v.size()<<endl;
    

    cout<<"Capacity of vector V : "<<v.capacity()<<endl; // capacity of vector v , it not related to size of vector, it is the maximum number of elements that can be stored in the vector without reallocating memory    
    {
        cout << "Here new experiment to check the vector way of working : "<<endl;
        vector <int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        cout<<v[0]<<endl; 
        cout<<v[1]<<endl; 
        cout<<v[2]<<endl; 
        cout<<v[3]<<endl; 
        cout<<v[4]<<endl; 
        cout<<v[5]<<endl; 
        cout<<v[6]<<endl;
        cout<<v[7]<<endl; 
        // cout<<v[8]<<endl;  

        
    }

    return 0;
}


/*
Vector : A vector is a dynamic array that can grow or shrink in size. It is part of the C++ Standard Template Library (STL) and provides a way to store elements in a contiguous memory location. Vectors are similar to arrays but offer more flexibility, such as automatic resizing and built-in functions for manipulation.

-> we basically include <vector> header file to use vectors in C++. but we can also use <bits/stdc++.h> header file which includes all the standard libraries including vector.
but it is not recommended to use <bits/stdc++.h> in production code as it is not part of the C++ standard and may not be available on all compilers. It is better to include only the necessary headers for better portability and readability.

-> Vector Functions : size , push_back , pop_back , clear , empty , front , back , at , insert , erase, resize, swap, etc.

->In C++, vector increases its capacity (usually doubling) when needed, allocating extra uninitialized space—but only elements up to .size() are valid to access; accessing beyond .size() (even within .capacity()) is undefined behavior, and may show garbage or 0 randomly.

-> The vector's capacity is the amount of space allocated for the vector, while the size is the number of elements currently stored in the vector. The capacity can be larger than the size, allowing for efficient growth without frequent reallocations.

Note: Accessing elements beyond the current size of the vector (like v1[5] or v1[6]) is undefined behavior and may lead to unexpected results or crashes. Always ensure you access valid indices within the range of the vector's size.
*/