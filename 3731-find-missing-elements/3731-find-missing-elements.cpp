class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min=nums[0],max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(min>nums[i]){
                min=nums[i];
            }
            if(max<nums[i]){
                max=nums[i];
            }
        }
        vector<int> ans;
        for(int i=min;i<=max;i++){
            int count = 0;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    count++;
                }
            }
            if(count==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};