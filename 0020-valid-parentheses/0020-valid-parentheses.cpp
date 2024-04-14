class Solution {
public:
    int matching(char a, char b) {
        if (a == '(' && b == ')') {
            return 1;
        } else if (a == '{' && b == '}') {
            return 1;
        } else if (a == '[' && b == ']') {
            return 1;
        } else {
            return 0;
        }
    }

    bool isValid(string s) {
        stack<char> st;
        int flag=1;
        
        for (int i = 0; i < s.length(); i++) {
            if(s.length()%2==1){
                flag=0;
                break;
            }
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else if (st.empty() || !matching(st.top(),s[i])) {
                flag =0;
                break;
            } else {
                st.pop();
            }
        }
        if(!st.empty()){
            flag=0;
        }
        return flag;
    }
};