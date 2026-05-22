class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> goalMap;

        for (int i = 0; i < nums.size(); ++i)
        {
            int goal = target - nums[i];

            if (goalMap.contains(nums[i]))
            {
                return {goalMap[nums[i]], i};
            }
            else
            {
                goalMap[goal] = i;
            }


        }
        
        return {-1};
    }
};
