class Solution {
   public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr = nums;
int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums.push_back(arr[i]);
        }
        return nums;
    }
};