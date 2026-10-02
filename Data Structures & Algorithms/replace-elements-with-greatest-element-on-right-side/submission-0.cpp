class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            int largest = arr[i + 1];
            for (int j = i + 1; j < arr.size(); j++) {
                if (largest < arr[j]) {
                    largest = arr[j];
                }
            }
            arr[i] = largest;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    };
};