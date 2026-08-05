class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<nums.size()-1;i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        vector<double> averages;
        for(int i=0;i<nums.size()/2;i++){
            double k = (double)(nums[i]+nums[n-1-i])/2.0;
            averages.push_back(k);
        }
        double min = averages[0];
        for(int i=1;i<averages.size();i++){
            if(min>averages[i]){
                min = averages[i];
            }
        }
        return min;
    }
};