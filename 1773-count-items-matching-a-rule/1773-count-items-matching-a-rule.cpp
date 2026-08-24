class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count =0;
        int k;
        if(ruleKey == "type"){
            k = 0;
        }
        else if(ruleKey == "color"){
            k = 1;
        }
        else{
            k = 2;
        }
        for(int i=0;i<items.size();i++){
            if(items[i][k]==ruleValue){
                count++;
            }
        }
        return count;
    }
};