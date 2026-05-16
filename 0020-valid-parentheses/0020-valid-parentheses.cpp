class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i=0;
        if(s.empty()) return false;
        while(i<s.length()){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{') st.push(s[i]);
            else if(s[i]==')'){
                if(st.empty() ||st.top()!='(') return false;
                st.pop();
            }else if(s[i]==']'){
                if(st.empty() ||st.top()!='[') return false;
                st.pop();
            }else if(s[i]=='}'){
                if(st.empty() ||st.top()!='{') return false;
                st.pop();
            }
            i++;
        }
        return st.empty();
    }
};