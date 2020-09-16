class Solution {
public:
    bool isValid(string str) {
        stack <char> temp;

        for (char elem : str) {
            if (elem == '(' || elem == '{' || elem == '[')
                temp.push(elem);

            else if (elem == ')' && !temp.empty() && temp.top() == '(')
                temp.pop();

            else if (elem == '}' && !temp.empty() && temp.top() == '{')
                temp.pop();

            else if (elem == ']' && !temp.empty() && temp.top() == '[')
                temp.pop();

            else return false;
        }

        return ((temp.size() == 0) ? true : false);
    }
};