/* 
    My solution is to make a frequency table of all the numbers in the nums vector,
    pass them into a priority queue, sorted by frequency (highest freq at the front),
    and output k elements from the front of the queue.
*/

struct ComparePair
{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b)
    {
        return a.second < b.second;
    }
};


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> frequencies; // <num, freq>
        priority_queue<pair<int, int>, vector<pair<int, int>>, ComparePair> freqQueue;

        for (int i = 0; i < nums.size(); ++i)
        {
            frequencies[nums[i]]++;
        }

        for (const auto& pair : frequencies)
        {
            freqQueue.push(pair);
        }

        vector<int> output;
        for (int i = 0; i < k; ++i)
        {
            output.push_back(freqQueue.top().first);
            freqQueue.pop();
        }

        return output;
    }
};
