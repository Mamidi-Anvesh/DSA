class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int max = 0;
        int curr = 0;
        for(char c:s){
            if(c=='('){
                st.push(c);
                curr++;
                if(curr>max){
                    max = curr;
                }
            }
            else if(c == ')'){
                st.pop();
                curr--;
            }
        }
        return max;
    }
};