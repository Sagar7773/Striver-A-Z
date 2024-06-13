// Brute force approach 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            int num = nums[i];
            for (int j = 0; j < n; j++) {
                if (nums[j] == num) {
                    cnt++;
                }
            }
            if (cnt == 1)
                return num;
        }
        return -1;
    }
};
// Better approch using hash && map data structure
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int maxi = nums[0];
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
        }
        
        vector<int> hash(maxi + 1, 0); // Correctly declare and initialize the hash vector
        
        for(int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            if(hash[nums[i]] == 1) {
                return nums[i];
            }
        }
        return -1;
    }
};
// it fails at negative arrays element so we use map data structure

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> countMap; // Using an unordered_map to handle all integers
        
        // Count occurrences of each number
        for (int num : nums) {
            countMap[num]++;
        }
        
        // Find the number that appears exactly once
        for (int num : nums) {
            if (countMap[num] == 1) {
                return num;
            }
        }
        
        return -1; // This line should never be reached if input guarantees a single number
    }
};
// Optimal Solution using XOR
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR=0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            XOR^=nums[i];
        }
        return XOR;
    }
};
