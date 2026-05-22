class Solution {
public:

    bool isAnagram(string s, string t) {

        /* Create two maps for s and t with key being the char and 
           value being the number of occurances, and then return the comparison */

        std::unordered_map<char, int> sCharMap;
        std::unordered_map<char, int> tCharMap;
    
        if (s.size() != t.size())
        {
            return false;
        }

        for (int i = 0; i < s.size(); ++i)
        {
            if (sCharMap[s[i]] >= 1)
            {
                sCharMap[s[i]]++;
            }
            else
            {
                sCharMap[s[i]] = 1;
            }
        }

        for (int i = 0; i < t.size(); ++i)
        {
            if (tCharMap[t[i]])
            {
                tCharMap[t[i]]++;
            }
            else
            {
                tCharMap[t[i]] = 1;
            }
        }

        return sCharMap == tCharMap;
    }
};
