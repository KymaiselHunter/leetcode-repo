//Name : Kyle Bautista
//November 2023
//8. String to Integer (atoi)
//Medium
//https://leetcode.com/problems/string-to-integer-atoi/description/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        while(s.size() > i && s[i] == ' ')
        {
            i++;
        }

        bool neg = false;

        if(s.size() > i && (s[i] == '+' || s[i] == '-'))
        {
            if(s[i] == '-') neg = true;
            i++;
        }

        string num = "";

        while(s.size() > i && isdigit(s[i]))
        {
            num += s[i];
            i++;
        }

        //cout << neg << endl;
        if(num.size() == 0) return 0;
        if(neg) return clamp(stod(num)*-1, pow(-2,31), pow(2,31)-1);
        return clamp(stod(num), pow(-2,31), pow(2,31)-1);
    }
};