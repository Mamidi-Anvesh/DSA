class Solution {
public:
    int reverse(int n){
        int rev = 0;
        while(n!=0){
            int rem = n%10;
            rev = rev*10 + rem;
            n/=10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int rev1 = reverse(num);
        int rev2 = reverse(rev1);
        return rev2==num;
    }
};