//Name : Kyle Bautista
//November 2023
//7. Reverse Integer
//Medium
//https://leetcode.com/problems/reverse-integer/description/

class Solution {
public:
    int reverse(int x) {
        bool neg = false;
        if(x < 0) neg = true;
        
        string num = to_string(x);
        if(neg) num = num.substr(1);

        string output = "";

        for(int i = num.size()-1; i >= 0; i--)
        {
            output += num[i];
        }

        try
        {
            if(neg) return stoi(output) * -1;
            else return stoi(output);
        }
        catch(...)
        {
            return 0;
        }
    }
};