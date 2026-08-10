class Solution {
public:
    void sorting(vector<int>& arr){
        for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr.size()-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
    int maxProductDifference(vector<int>& nums) {
        sorting(nums);
        int n = nums.size();
        return (nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
    }
};