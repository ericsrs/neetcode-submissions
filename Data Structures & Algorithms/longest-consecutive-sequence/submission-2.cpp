class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int, vector<int>, std::greater<int>> sorted(nums.begin(), nums.end());

        if (nums.empty())
            return 0;

        int longest = 1;
        int current = 1;
        while(!sorted.empty())
        {
            int top = sorted.top();
            cout << "top: " << top << endl;

            sorted.pop();
            if (sorted.top() == top)
            {
                continue;
            }
            else if (sorted.top() == (top + 1))
            {
                cout << "sorted.top: " << sorted.top() << endl;
                current++;
                cout << "current: " << current << endl;
            }
            else
            {
                current = 1;
            }

            if (current > longest)
            {
                longest = current;
            }

        }

        return longest;
    }
};
