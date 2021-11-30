#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char, int> umap;
        for(int j = 0, i = 0; j < s.length(); j++)
        {
            if(umap.count(s[j]))
            {
                i = max(umap[s[j]], i);
            }
            ans = max(ans, j - i + 1);
            umap[s[j]] = j+1;
        }
        return ans;
    }
};

/*
LeetCode Statistics:
4 ms - Beats 96.64% of Users
8.3 mb - Beats 70.27% of Users
*/