//Name : Kyle Bautista
//September 2023
//14. Longest Common Prefix
//Easy
//https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string shortest = strs[0];
        int shortIndex = 0;
        for(int i = 1; i < strs.size(); i++)
        {
            if(strs[i].length() < shortest.length()) 
            {
                shortest = strs[i];
                shortIndex = i;
            }
        }

        string output = "";
        for(int i = 0 ; i < shortest.length(); i++)
        {
            //cout << i << endl;
            for(int j = 0; j < strs.size(); j++)
            {
                if(j != shortIndex &&shortest[i] != strs.at(j)[i]) return output;
            }
            output += shortest[i];
        }
        return output;
    }
};