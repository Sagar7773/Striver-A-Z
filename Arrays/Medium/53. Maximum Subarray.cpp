// brute force approach TC--> O(n3)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum =0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                    maxi=max(maxi,sum);
                }
            }
        }
        return maxi;
    }
};
// Brute force Approach TC --> O(n2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};
// using Kadane algo Optimal soltion to find the sub array along with largest sum
class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long n){
            long long maxi=LLONG_MIN;
            long long sum=0;
            
            int start =0;
            int ansStart=-1; int ansEnd=-1;
            for(int i=0;i<n;i++){
                if(sum==0) start =i;
                sum+=arr[i];
                if(sum>maxi){
                    maxi=sum;
                    ansStart=start; ansEnd=i;
                }
                if(sum<0) sum=0;
            }
        return maxi;
    }
};
