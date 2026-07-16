class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> ans(9,0);
        int score=0;
        while(n!=0){
            int rem=n%10;
            score+=rem;
            n=n/10;
        }
        return score;
    }
};