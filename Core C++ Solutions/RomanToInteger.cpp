//Name : Kyle Bautista
//Septermber 2023
//13. Roman To Integer
//Easy
//https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    const string LETTERS= "MDCLXVI";
    //enum romanValues = {M=1000, D=500, C=100, L=50,X=10,V=5,I=1};
    int romanToInt(string s) {
        if(s.size() <= 0) return 0;
        else if(s.size() <= 1)
        {
            if(s.at(0) == 'M') return 1000;
            else if(s.at(0) == 'D')return 500;
            else if(s.at(0) == 'C') return 100;
            else if(s.at(0) == 'L') return 50;
            else if(s.at(0) == 'X') return 10;
            else if(s.at(0) == 'V') return 5;
            else if(s.at(0) == 'I') return 1;
            else return 0;
        }

        for(int i  = 0; i < LETTERS.size(); i++)
        {
            if(s.find(LETTERS[i]) != -1)
            {
                int x = s.find(LETTERS[i]);
                string p1 = s.substr(x,1);
                string p2 = s.substr(x + 1);
                string p3 = s.substr(0,x);
                //cout << p1 << " " << p2 << " " << p3  << endl;
                return(romanToInt(p1)+ romanToInt(p2) - romanToInt(p3));
                /* + romanToInt(s.substr(IndexOf(s,LETTERS[i] + 1) - romanToInt(s.substr(0,IndexOf(s,LETTERS[i]-1)*/
            } 
        }
    return 0;
    }
    /*int romanToInt(string s) {
        output = 0;
        finished = false;
        while(finished)
        {
            string hol
            if(IndexOf(s, "M") != -1);
        }
    }*/
};