class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int count = 0;
        string ans;
        for(char ch:s){
            if(ch=='('){
                st.push(ch);
                count++;
                if(count>1){
                    ans = ans+ch;
                }
            }
            else{
                st.pop();
                count--;
                if(count>=1){
                    ans = ans+ch;
                }
            }
        }
        return ans;
    }
};