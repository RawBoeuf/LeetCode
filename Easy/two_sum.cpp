#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++)
        {
            int test = target-nums[i];
            if(umap.count(test))
            {
                return vector<int> {umap[test], i};
            }
            umap.emplace(nums[i], i);
        }
        return vector<int> {};
    }
};

/*
LeetCode Statistics:
8 ms - Beats 95.11% of Users
10.7 mb - Beats 58.27% of Users
*/