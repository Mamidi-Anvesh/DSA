class Solution {
public:
    string truncateSentence(string s, int k) {
        int x = 0;
        string ans;
        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(c == ' '){
                x++;
            }
            if(x == k){
                break;
            }
            ans+=c;
        }
        return ans;
    }
};