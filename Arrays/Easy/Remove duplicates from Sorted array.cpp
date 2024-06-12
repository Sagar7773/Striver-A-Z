#### Brute Force Approch

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(int i = 0;i< nums.size();i++ ){
            st.insert(nums[i]);
        }
        int index = 0;
        for(auto it: st){
            nums[index]=it;
            index++;
        }
        return index;
    }
};
																				
**TC ->O(nlogn+n)
SC->O(N)**
	
# 	Optimal Solution
	 
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i =0;
        for(int j =1;j<arr.size();j++){
            if (arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
};
1. 	TC -> O(N)
2.  SC ->O(1)
	
	
	