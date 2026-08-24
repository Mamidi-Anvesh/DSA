class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int tSum = 0;
        for(int n:nums){
            tSum += n;
        }
        int curr = 0;
        int count = 0;
        for(int i=0;i<nums.size()-1;i++){
            curr += nums[i];
            tSum -= nums[i];
            if((curr-tSum)%2 == 0){
                count++;
            }        
        }
        return count;
    }
};