class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        unordered_map<int, int> goal;
        int need = 0;
        for (int i = 0; i < numbers.size(); ++i)
        {
            need = target - numbers[i];

            if (goal.count(need))
            {
                return { goal[need], i + 1 };
            }
            goal[numbers[i]] = i + 1;
        }

        return {};
    }
};
