class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> T_array;
        for(int i=0;i<nums.size();i++){
            T_array.insert(T_array.begin()+index[i],nums[i]);
        }
        return T_array;
    }
};