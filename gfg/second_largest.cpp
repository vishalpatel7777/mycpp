// gfg Problem: Find the second largest element in an array

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second = 0;
        int max=0;
        for(int val: arr){
            if (max < val){
                max=val;
            }
        }
        for(int val:arr){
            if(val == max){
                continue;
            }
            if(second <val){
                second= val;
            }
        }
        if(second !=0) { return second ;}
        else{ return -1; }
    }
};






// method 2 
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second = 0;
        int max=0;
        for(int val : arr){
            if(val > max ){
                second = max;
                max = val;
            }
            else if(val > second  && val != max){
                second= val;
            }
        }
        return (second==0) ? -1 : second;
    }
};