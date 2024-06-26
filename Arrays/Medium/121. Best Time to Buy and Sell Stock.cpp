// Brute Force TC--> O(N2) SC--> O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(prices[j]>prices[i]){
                    maxPro=max(maxPro,prices[j]-prices[i]);
                }
            }
        }
        return maxPro;
    }
};

// Optimal Approach TC--> O(N)  SC-->O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro=0;
        int minPrice=INT_MAX;
        for(int i=0;i<n;i++){
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);
        }
        return maxPro;
    }
};