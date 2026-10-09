class Solution {
public:
    bool isPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}
    int sumOfPrimesInRange(int n) {
        int r=0,x=n;
        while(x!=0){
            r = r*10 + x%10;
            x = x/10;
        }
        int sum = 0;
        for(int i = min(n,r);i<=max(n,r);i++){
            if(isPrime(i)){
                sum += i;
            }
        }
        return sum;
    }
};