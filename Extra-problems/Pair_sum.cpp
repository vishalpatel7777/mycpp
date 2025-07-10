/*
 in this i am going to find the pair of elements in an array such that their sum is equal to a given value
 example : arr = [1, 2, 3, 4, 5] and target = 5 so that i have to find the pairs (1, 4), (2, 3) which sum is equal to 5
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 5;
    vector<pair<int, int>> pairs; // to store the pairs found

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                pairs.push_back(make_pair(arr[i], arr[j]));
            }
        }
    }
    
    cout << "Pairs with sum " << target << " are with o(n2) time complexity: " << endl;
    for (const auto &p : pairs)
    {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    
    {
        vector <int> arr = {1, 2, 3, 4, 5};
        int target = 5;
        int n = arr.size();

        cout <<"Now lets reduce the time complexity to o(n)  [because there is written like it is sorted array => so i am gonna use 2 pointers approach ]" << endl;
        int left = 0, right = n - 1;
       /* for(int i=0 ; i<n ; i++){
            if(arr[left] + arr[right] == target){
                cout << "(" << arr[left] << ", " << arr[right] << ")" << endl;
                // left++; 
                right--;
            }
            else if(arr[left] + arr[right] < target){
                left++;
            }
            else{
                right--;
            }
        }*/
        while(left<right){
            int sum = arr[left] + arr[right];
            if(sum == target){
                cout << "(" << arr[left] << ", " << arr[right] << ")" << endl;
                // left++;    // if you want to find all pairs, uncomment this line like (1,2) , (2,1) i mean it is same but if you need then remove
                right--;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }

    }

}
