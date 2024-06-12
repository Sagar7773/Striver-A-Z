class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> temp;

        // Store the last k elements in temp
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // Shifting from the start to the k-th position to the end
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Place the k elements stored in temp at the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
