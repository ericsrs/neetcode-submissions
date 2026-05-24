#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) 
    {
        string spliced = "";

        for (int i = 0; i < s.size(); ++i)
        {
            if (std::isalnum(s[i]))
            {
                spliced += tolower(s[i]);
            }
        }

        string::iterator left = spliced.begin();
        string::iterator right = spliced.end() - 1;

        for (int i = 0; i < (spliced.size() / 2); ++i)
        {
            if (*left != *right)
            {
                return false;
            }

            left++;
            right--;
        }
        
        return true;
    }
};
