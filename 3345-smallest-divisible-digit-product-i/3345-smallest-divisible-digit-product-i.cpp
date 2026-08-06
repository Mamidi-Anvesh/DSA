class Solution {
public:
    int product(int k){
        int p=1;
        while(k!=0){
            int rem = k%10;
            p*=rem;
            k = k/10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        int p = product(n);
        while(p%t!=0){
            n+=1;
            p = product(n);
        }
        return n;
    }
};