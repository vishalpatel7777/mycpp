/*

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    // int n=5;
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int n = arr.size();
    cout<<"lets print all subarrays of the given array"<<endl;  // here the time complexity is O(n^3) and space complexity is O(1)    
    for(int start =0; start < n; start++){
        for(int end=start ; end<n ; end++){
            for(int i=start; i<=end; i++){
                cout << arr[i] ;
            }
            cout << " ";
        }
        cout << endl;
    }    


    cout<<endl;
    cout<<"now do the max sub array sum : "<<endl; // here the time complexity is O(n^2) and space complexity is O(1)
    int max_sum = INT_MIN; // Initialize to the smallest possible integer
    // int max_sum = 0; // This would not work for arrays with all negative numbers
    for(int start=0 ; start < n; start++){
        int current_sum =0;
        for(int end = start; end < n; end++){
            current_sum += arr[end];
            max_sum = max(max_sum, current_sum);
        }

        
    }
    cout << "Max subarray sum is: " << max_sum << endl; 

    {
        cout<<"Now with the kadan's algorithm : " << endl ; // here the time complexity is O(n) and space complexity is O(1)
        int max_sum = INT_MIN; 
        int current_sum = 0;
        for(int i = 0; i < n; i++){
            current_sum += arr[i]; 
            max_sum = max(max_sum, current_sum);   // we have to check max_sum before resetting current_sum cuz sometime  it may possible that the final max_sum is negative itself so in that case we gonna get output as 0 if we reset current_sum before max_sum.
            if(current_sum < 0){
                current_sum = 0; // Reset current sum if it becomes negative
            }
        }
        cout << "Max subarray sum using Kadane's algorithm is: " << max_sum << endl;


    }

    return 0;
}


/*
 kadan's algorithm is a dynamic programming algorithm that solves the maximum subarray sum problem in linear time.
 It works by maintaining a running sum of the array elements and keeping track of the maximum sum seen so far. If the running sum becomes negative, it is reset to zero, as a negative sum would not contribute positively to any future subarray sums. 
The algorithm iterates through the array, updating the running sum and the maximum sum as it goes. This approach is efficient and works well for both positive and negative numbers in the array.

*/