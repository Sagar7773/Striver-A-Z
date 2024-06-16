// Brute force approach

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int it : nums){
            if(it>0){
                pos.push_back(it);
            }else{
                neg.push_back(it);
            }
        }
        int n= nums.size();
        for(int i=0;i<n/2;i++){
            nums[i*2]=pos[i];
            nums[i*2+1]=neg[i];
        }
        return nums;
    }
};
// Optimal Approach
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        int pos=0;
        int neg=1;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg+=2;
            }else{
                ans[pos]=nums[i];
                pos+=2;
            }
        }
        return ans;
    }
};
// Variety 2 where we have to store remaining element in last
#include <bits/stdc++.h> 

void rearrange(vector<int> &arr)
{
	int n = arr.size();
    vector<int>pos,neg;
    for(int it: arr){
        if(it>0){
            pos.push_back(it);
        }else{
            neg.push_back(it);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int left =2*neg.size();
        for(int i=neg.size();i<pos.size();i++){
            arr[left]=pos[i];
            left++;
        }
    }else{
        for(int i=0;i<pos.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int left =2*pos.size();
        for(int i=pos.size();i<neg.size();i++){
            arr[left]=neg[i];
            left++;
        }
        
    }
    
}
