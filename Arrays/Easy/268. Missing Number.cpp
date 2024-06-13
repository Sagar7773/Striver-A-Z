// Sum Approch(Optimal)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int vecSum =0;
        for(int i =0;i<n;i++){
            vecSum+=nums[i];
        }
        int realSum=0;
        for(int i =1;i<=n;i++){
            realSum+=i;
        }
        return realSum-vecSum;
    }
};

// Brute force Approach
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<=n;i++){
            bool flag = false;
            for(int j = 0;j<n;j++){
                if(nums[j]==i){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                return i;
            }
        }
        return -1;
    }
};

// Better Approach using hashing
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        vector<int>hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]=1;
        }
        for(int i =0;i<=n;i++){
            if(hash[i]==0){
                return i;
            }
        }
        return -1;
    }
};

//XOR approach
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        int xor2 = 0;
        for(int i= 0;i<n;i++){
            xor1^=(i+1);
            xor2^=nums[i];
        }
        return xor1^xor2;
    }
};
