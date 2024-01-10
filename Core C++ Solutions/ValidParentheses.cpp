//Name : Kyle Bautista
//October 2023
//20. Valid Parentheses
//Easy
//https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        stack<char> pancakes;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                pancakes.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(pancakes.size() <= 0)
                {
                    return false;
                }
                else
                {
                    if((pancakes.top() != '(' && s[i] == ')') ||
                    (pancakes.top() != '{' && s[i] == '}') ||
                    (pancakes.top() != '[' && s[i] == ']')) return false;
                    else
                    {
                        pancakes.pop();
                    }
                }
            }
        }

        return pancakes.empty();
    }
};