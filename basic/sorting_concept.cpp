#include<iostream>
#include<vector>  // for vector
#include <algorithm>  // for sort function

using namespace std;



// lets create the custom comparator function to sort the vector pair based on second element
bool comparator(pair<int, int> a, pair<int, int> b) {
    if(a.second < b.second) return true ;  // Sort based on the second element of the pair

    // but if the second elements are equal, it will sort based on the first element
    if(a.second == b.second) {
        return a.first < b.first;  // Sort based on the first element of the pair
    }
    return false;  // If the second element of a is greater than b, return false

}

int main() {

    cout<<"for the array : "<<endl;
    int arr[6] = {5, 2, 9, 1, 5, 6};

    sort(arr, arr + 6);  // Sort the array in ascending order

    for(int val : arr){
        cout << val << " ";

    }
    cout << endl;

    cout<<"for the vector : "<<endl;
    vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6};
    sort(vec.begin(), vec.end());  // Sort the vector in ascending order
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    cout<<"for the vector in descending order : "<<endl;
    sort(vec.begin(), vec.end(), greater<int>());  // Sort the vector in descending order
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    cout<<"lets sort the vector pair : "<<endl;
    vector<pair<int, int>> vec_pair = {{3, 1}, {1, 5},{2,5},{6,5}, {4, 2}, {1, 6},{2,3},{5,4}};  
    sort(vec_pair.begin(), vec_pair.end());  // Sort the vector of pairs in ascending order based on the first element
    for(auto p: vec_pair){
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
    

    cout<<"lets sort the vector pair based on second element : "<<endl;
    sort(vec_pair.begin(), vec_pair.end(), comparator);  // Sort the vector of pairs based on the second element using custom comparator
    for(auto p: vec_pair){
        cout << "(" << p.first << ", " << p.second << ") ";
    }



    return 0;
}


/*
 sorting : Sorting is the process of arranging elements in a specific order, typically in ascending or descending order. It is a fundamental operation in computer science and is used in various applications such as searching, data analysis, and optimization.

    to do vector pair based on second element we can  use custom comparator function or lambda function.

*/