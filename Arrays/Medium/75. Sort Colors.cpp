// brute force approach
// solving using merge sort

// better approch
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        
        // Count the number of 0s, 1s, and 2s
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) cnt0++;
            else if (nums[i] == 1) cnt1++;
            else cnt2++;
        }
        
        nums.clear();
        
        // Add the counted numbers of 0s
        for (int i = 0; i < cnt0; i++) {
            nums.push_back(0);
        }
        
        // Add the counted numbers of 1s
        for (int j = 0; j < cnt1; j++) {
            nums.push_back(1);
        }
        
        // Add the counted numbers of 2s
        for (int k = 0; k < cnt2; k++) {
            nums.push_back(2);
        }
    }
};


// Optimal approach using Dutch National flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low=0; int mid=0; int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
}; 
