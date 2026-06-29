class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // Pop exactly two operands (order matters for - and /)
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if      (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b);
            } else {
                // It's a number — convert string to int and push
                st.push(stoi(token));
            }
        }

        return st.top(); // Final result is the only element left
    }
};