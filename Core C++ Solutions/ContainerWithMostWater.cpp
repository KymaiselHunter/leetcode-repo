//Name : Kyle Bautista
//October 2023
//11. Container With Most Water
//Medium
//https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1 = 0;
        int p2 = height.size() - 1;

        int output = min(height[p1],height[p2]) * (p2-p1);

        while(p1 != p2)
        {
            if(min(height[p1],height[p2]) == height[p1]) p1++;
            else p2--;
            //cout << p1 << " " << p2 << endl;
            if(min(height[p1],height[p2]) * (p2-p1) > output) output = min(height[p1],height[p2]) * (p2-p1);
        }
        return output;
    }
};