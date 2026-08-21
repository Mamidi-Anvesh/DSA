class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++){
            if(result.empty()){
                result.push_back({nums[i]});
                continue;
            }
            for(int j=0;j<result.size();j++){
                int count = 0;
                for(int k=0;k<result[j].size();k++){
                    if(nums[i]==result[j][k]){
                        count++;
                    }
                }
                if(count==0){
                    result[j].push_back(nums[i]);
                    break;
                }
                if(j+1==result.size()){
                    result.push_back({nums[i]});
                    break;
                }
            }
        }
        return result;
    }
};