//Name : Kyle Bautista
//October 2023
//3. Longest Substring Without Repeating Characters
//Medium
//https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int output = 0;
        string substr = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(substr.find(s[i]) == -1) substr += s[i];
            else
            {
                substr = substr.substr(substr.find(s[i]) + 1);
                substr += s[i];
            }
            //cout << substr << endl;
            if(substr.length() > output) output = substr.length();
        }
        return output;
    }
};