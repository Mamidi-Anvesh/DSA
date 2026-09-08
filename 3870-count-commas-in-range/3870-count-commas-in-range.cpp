class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int k = n-999;
        return k;
    }
};