#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string test = to_string(x);
        bool isPalindrome = true;
        for(int i = 0; i < test.length(); i++)
        {
            if(test[i] != test[test.length()-i-1])
            {
                isPalindrome = false;
            }
        }
        return isPalindrome;
    }
};