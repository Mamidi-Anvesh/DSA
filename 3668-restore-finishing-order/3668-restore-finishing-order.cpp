class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        for(int i=0;i<order.size();i++){
            int x = order[i];
            for(int j=0;j<friends.size();j++){
                if(x==friends[j]){
                    result.push_back(x);
                    continue;
                }
            }
        }
        return result;
    }
};