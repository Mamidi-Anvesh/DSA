class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        vector<int> leftsum(n);
        vector<int> rightsum(n);
        long currleft = 0;
        for(int i=0;i<nums.size();i++){
            leftsum[i] = currleft;
            currleft+=nums[i];
        }
        long curright = 0;
        for(int i=nums.size()-1;i>=0;i--){
            rightsum[i] = curright;
            curright+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            answer[i] = abs(leftsum[i]-rightsum[i]);
        }
        return answer;
    }
};