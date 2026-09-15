class Solution {
public:
    bool isValid(string s) {
        stack<char> v;

        for (int i = 0; i < s.length(); i++) {

            // opening brackets
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                v.push(s[i]);
            }

            // closing brackets
            else {
                // pehle check karo stack empty na ho
                if (v.empty()) {
                    return false;
                }

                if ((s[i] == ')' && v.top() == '(') ||
                    (s[i] == ']' && v.top() == '[') ||
                    (s[i] == '}' && v.top() == '{')) {

                    v.pop();
                }
                else {
                    return false;
                }
            }
        }

        // agar koi opening bracket bach gaya ho
        return v.empty();
    }
};