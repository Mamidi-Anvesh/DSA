class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            if(count[nums[i]]>1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};