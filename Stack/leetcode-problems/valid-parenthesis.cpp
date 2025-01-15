// Summary of the approach:
// 1. A helper function `isMatch` is used to check if two characters form a valid pair of brackets (e.g., `()` or `{}`). It returns `true` for matching pairs, `false` otherwise.
// 2. The `isValid` function iterates through the string `s` and uses a stack to handle the brackets:
//    - When encountering an opening bracket (`(`, `{`, `[`), it is pushed onto the stack.
//    - When encountering a closing bracket (`)`, `}`, `]`), the function checks if the stack is empty. If it is not empty, it checks if the top element of the stack matches the closing bracket. If they match, the top element is popped from the stack. If they do not match or the stack is empty, it returns `false`.
// 3. After processing the entire string, if the stack is empty, it indicates that all opening brackets have been matched with closing ones, and the string is valid. If the stack is not empty, the string is invalid, as some opening brackets are not closed.


class Solution {
public:
    bool isMatch(char ch1, char ch2) {
        if ((ch1 == '(' && ch2 == ')') || (ch1 == '{' && ch2 == '}') ||
            (ch1 == '[' && ch2 == ']'))
            return true;
        else
            return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                // if the character is an opening bracket push it to the stack
                st.push(ch);
            } else {
                // if the character is a closing bracket

                // first check if the stack is empty
                if (!st.empty()) {
                    // check if the character matches with top of the stack
                    if (isMatch(st.top(), ch)) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }

        if (st.empty())
            return true;
        else
            return false;
    }
};