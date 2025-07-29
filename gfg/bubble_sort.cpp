// gfg
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i =0 ; i<n ; i++){
            bool isSwap= false;
            for(int j=0 ; j <n-i-1 ; j++){
                if(arr[j] > arr[j+1]){
                    // int temp = arr[j];
                    // arr[j]=arr[j+1];
                    // arr[j+1]=temp;
                    swap(arr[j], arr[j+1]);
                    isSwap =true;
                }
                
            }
            if(!isSwap ) break;
        }
    }
};