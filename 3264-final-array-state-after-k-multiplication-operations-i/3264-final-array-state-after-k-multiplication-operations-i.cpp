class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k>0){
            int min=nums[0];
            int x=0;
            for(int i=1;i<nums.size();i++){
                if(min>nums[i]){
                    x = i;
                    min = nums[i];
                }
            }
            min*=multiplier;
            nums[x]=min;
            k--;
        }
        return nums;
    }
};