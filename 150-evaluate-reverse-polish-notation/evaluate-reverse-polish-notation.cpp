class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(int i = 0; i < tokens.size(); i++){
            if(st.empty()){
                st.push(tokens[i]);
            }else if(tokens[i] != "*" && tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/"){
                st.push(tokens[i]);
            }else if(tokens[i] == "+"){
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(a+b));
            }else if(tokens[i] == "-"){
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(b-a));
            }else if(tokens[i] == "*"){
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(a*b));
            }else{
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(b/a));
            }
        }
        return stoi(st.top());
    }
};