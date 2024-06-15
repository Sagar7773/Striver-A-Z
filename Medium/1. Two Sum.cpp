// Brute Force approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                // if(i==j) continue;
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

// Better approach using hashmap

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        map<int,int>mpp;
        for(int i =0;i<n;i++){
            int a = nums[i];
            int more = target-a;
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            mpp[a]=i;
        }
        return {-1,-1};
    }
};