class Solution {
public:
    string hashString(string s){
        stack<char> st;
        for(char ch : s){
            if(ch == '#' && !st.empty()) st.pop();
            else {
                if(st.empty() && ch == '#')
                {
                    continue;
                }else{
                    st.push(ch);
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            char temp = st.top();
            ans +=temp;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    bool backspaceCompare(string s, string t) {
        string s1 = hashString(s);
        string t1 = hashString(t);
        cout << s1 << " " << t1  ;
       
       return s1 == t1 ? true:false;
    }
};
