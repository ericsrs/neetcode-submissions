class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_map<int, int> numsMap;

        // If there are duplicates, the map will overwrite existing
        // values
        for (int i = 0; i < nums.size(); ++i)
        {
            numsMap.insert({nums[i], i});
        }

        if (numsMap.size() < nums.size())
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};