class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            int n = i;
            bitset<32>b(n);
            if(b.count()==k){
                sum += nums[i];
            }
        }
        return sum;
    }
};