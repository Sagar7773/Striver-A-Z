// Brute Force Approach
class Solution {
public:
    bool ls(vector<int>&v,int num){
        for(int i=0;i<v.size();i++){
            if(v[i]==num) return true;
        }
        return false;
    }
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;//Edge case

        int longSec = 1;
        int count=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int x= nums[i];
            count=1;
            while(ls(nums,x+1)==true){
                x+=1;
                count+=1;
            }
            longSec=max(longSec,count);
        }
        return longSec;
    }
};

// better Approach
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int longest =1;
        int cnt=0;
        int lastsmaller=INT_MIN;

        if(nums.empty()) return 0;

        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmaller){
                cnt+=1;
                lastsmaller=nums[i];
            }else if(nums[i]!=lastsmaller){
                cnt=1;
                lastsmaller=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};


// Optimal Solution

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(nums.empty()) return 0;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        // Find longest subsequence
        int longest =1;
        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int count=1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                    count+=1;
                    x+=1;
                }
                longest=max(longest,count);
            }
            
        }
        return longest;
    }
};