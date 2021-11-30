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
8 ms - Beats 64.54% of Users
10.7 mb - Beats 56.25% of Users
*/