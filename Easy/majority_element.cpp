#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int maj_num = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(!umap.count(nums[i]))
            {
                umap.emplace(1, nums[i]);
            }
            else if(umap.count(nums[i]) && umap[nums[i]] > umap[maj_num])
            {
                maj_num = nums[i];
            }
            else if(umap.count(nums[i]))
            {
                umap[umap[nums[i]] + 1] = nums[i];
            }
        }
        return maj_num;
    }
};