class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<unordered_map<char, int>> mapVect;
        vector<vector<string>> output;

        for (int i = 0; i < strs.size(); ++i)
        {
            cout << "LOOP FOR: " << strs[i] << endl;
            unordered_map<char, int> strMap;

            // Iterate through individual str
            for (int j = 0; j < strs[i].size(); ++j)
            {
                strMap[strs[i][j]]++;
            }

            // Iterate through vector of maps
            int matchIndex = -1;
            for (int j = 0; j < mapVect.size(); ++j)
            {
                if (strMap == mapVect[j])
                {
                    cout << "Match at j = " << j << endl;
                    matchIndex = j;
                }
            }

            if (matchIndex == -1)
            {   
                vector<string> newAnagrams;
                newAnagrams.push_back(strs[i]);

                cout << "Push back: " << strs[i] << endl;
                mapVect.push_back(strMap);
                output.push_back(newAnagrams);
            }
            else
            {
                cout << "Indexing\n";
                cout << "matchIndex: " << matchIndex << endl;
                cout << "strs[i]: " << strs[i] << endl;
                output[matchIndex].push_back(strs[i]);
            }

            cout << endl;
        }

        for (int i = 0; i < mapVect.size(); ++i)
        {
            cout << "i: " << i << endl;
            for (const auto& pair : mapVect[i])
            {
                cout << "{ " << pair.first << ", " << pair.second << " }\n";
            }
        }
        return output;
    }
};

