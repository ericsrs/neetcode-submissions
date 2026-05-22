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

        // unordered_map initializes int values to 0 upon inserting a new key
        for (int i = 0; i < s.size(); ++i)
        {
            sCharMap[s[i]]++;
            tCharMap[t[i]]++;
        }

        return sCharMap == tCharMap;
    }
};
