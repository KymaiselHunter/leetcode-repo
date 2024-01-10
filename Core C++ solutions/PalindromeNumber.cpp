//Name : Kyle Bautista
//September 2023
//9. Palindrone Number
//Easy
//https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != s[s.size()-1-i]) return false;
        }
        return true;
    }
};