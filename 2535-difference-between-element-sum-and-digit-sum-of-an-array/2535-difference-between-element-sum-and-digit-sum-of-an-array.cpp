class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int Esum=0;
        int Dsum=0;
        for(int i=0;i<nums.size();i++){
            Esum+=nums[i];
            int n = nums[i];
            while(n!=0){
                Dsum+=n%10;
                n=n/10;
            }
        }
        return abs(Dsum-Esum);
    }
};