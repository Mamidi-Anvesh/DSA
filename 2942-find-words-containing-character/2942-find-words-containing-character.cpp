class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            int count=0;
            for(int j=0;j<words[i].size();j++){
                if(x==words[i][j]){
                    count++;
                }
            }
            if(count>0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};