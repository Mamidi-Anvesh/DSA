class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k=0;
        vector<int> ans(2*n);
        int i=0;
        int j=n;
        while(i<n){
            ans[k] = nums[i];
            k++;
            ans[k] = nums[j];
            k++,j++,i++;
        }
        return ans;
    }
};