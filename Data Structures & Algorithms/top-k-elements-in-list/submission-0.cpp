class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (const auto& num : nums) {
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto x : freq) {
            bucket[x.second].push_back(x.first);
        }

        vector<int> result;
        for (int i = bucket.size() - 1; i >= 0; i--) {
            for (auto x : bucket[i]) result.push_back(x);
            if (result.size() == k) {
                return result;
            }
        }
        return result;
    }
};
