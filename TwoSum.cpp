//Name : Kyle Bautista
//October 2023
//Two Sum
//https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(i!=j && nums[i] + nums[j] == target)
                {
                    //out << nums[i] << " "<< nums[j]<< endl;
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }
        return nums;
    }
};