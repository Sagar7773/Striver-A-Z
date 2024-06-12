class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        
        // Find first zero index
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        
        // If there are no zeroes in the array, we are done
        if (j == -1) return;

        // Now move non-zero elements to the position pointed by j
        for (int i = j + 1; i < n; ++i) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
