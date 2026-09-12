class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string res;
        for(string s:words){
            res += s[0];
        }
        if(s==res){
            return true;
        }
        return false;
    }
};