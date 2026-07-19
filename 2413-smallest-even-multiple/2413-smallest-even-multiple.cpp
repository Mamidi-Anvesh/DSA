class Solution {
public:
    int smallestEvenMultiple(int n) {
        int mul = 0;
        for(int i = 1;i<=10;i++){
            if((n*i)%2==0){
                mul = n*i;
                break;
            }
        }
        return mul; 
    }
};