class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for(int i=nums.size()-1;i>=0;i--){
            int n = nums[i];
            while(n!=0){
                res.insert(res.begin(),n%10);
                n/=10;
            }
        }
        return res;
    }
};