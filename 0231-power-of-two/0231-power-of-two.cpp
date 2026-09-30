class Solution {
public:
    bool power(int x){
        if(x==1){
            return true;
        }
        if(x%2==0){
           return power(x/2);
        }
        return false;
    }
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        return power(n);
    }
};