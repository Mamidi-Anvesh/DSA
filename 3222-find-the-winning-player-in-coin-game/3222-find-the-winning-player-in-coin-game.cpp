class Solution {
public:
    string winningPlayer(int x, int y) {
        int k=0;
        while(x>=1 && y>=4){
            x-=1;
            y-=4;
            k++;
        }
        if(k%2!=0){
            return "Alice";
        }
        return "Bob";
    }
};