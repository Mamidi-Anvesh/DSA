class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> squares(n);
        for(int i=0;i<n;i++){
            squares[i] = (long long)nums[i]*nums[i];
        }
        std::sort(squares.begin(),squares.end());
        long long score = 0;
        int i;
        for(i=0;i<n;i++){
            if(i<n/2){
                score -= squares[i];
            }
            else{
                score += squares[i];
            }
        }
        return score;
    }
};