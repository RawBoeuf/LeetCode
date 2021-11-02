#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> store;
        unordered_map<string, int> umap;
        for (int i : nums)
        {
            umap[to_string(nums[i])] = i;
        }
        for (int i : nums)
        {
            if(umap.at(to_string(target - nums[i])))
            {
                store.push_back(umap.at(to_string(target - nums[i])));
                break;
            }
            else
            {
                continue;
            }
        }
        return store;
    }
};