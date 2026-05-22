class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> sCharMap;
        std::unordered_map<char, int> tCharMap;
    
        if (s.size() != t.size())
        {
            return false;
        }

        for (int i = 0; i < s.size(); ++i)
        {
            //cout << "sCharMap[s[i]]: " << sCharMap[s[i]];

            if (sCharMap[s[i]] >= 1)
            {
                //cout << "sCharMap[s[i]] true: (" << s[i] << ", " << sCharMap[s[i]] << ")\n";
                sCharMap[s[i]]++;
            }
            else
            {
                //cout << "insert " << s[i] << endl;
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

        // cout << "sCharMap" << endl;
        // for (const auto& pair : sCharMap)
        // {
        //     cout << "(" << pair.first << ", " << pair.second << ")" << endl;
        // }

        // cout << "tCharMap" << endl;
        // for (const auto& pair : tCharMap)
        // {
        //     cout << "(" << pair.first << ", " << pair.second << ")" << endl;
        // }

        if (sCharMap == tCharMap)
        {
            return true;
        }

        return false;

    }
};
