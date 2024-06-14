// Brute Force Approach with TC--> O(n3);

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k){ 
        int maxlen =0;
        for(int i =0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum =0;
                for(int t=i;t<=j;t++){
                    sum+=arr[t];
                }
                if(sum==k) maxlen=max(maxlen,(j-i+1));
            }
        }
        return maxlen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends




// Brute force optimised from O(n3) --> O(n2)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        int maxlen =0;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                if(sum==k) maxlen =max(maxlen,(j-i+1));
            }
            
        }
        return maxlen;
    } 

};


//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends



// Better approach using HashMAp
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, long long k){ 
        map<long long,int>preSumMap;
        long long sum = 0;
        int maxLen = 0;
        for(int i =0;i<n;i++){
            sum+=a[i];
            if(sum==k){
                maxLen=max(maxLen,i+1);
            }
            long long rem = sum-k;
            if(preSumMap.find(rem)!=preSumMap.end()){
                int len = i-preSumMap[rem];
                maxLen=max(maxLen,len);
            }
            if(preSumMap.find(sum)==preSumMap.end()){
                preSumMap[sum]=i;
            }
        }
        return maxLen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends

// Most Optimal Solution but it will work only for Positve elements in the array

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, long long k){
        int left =0, right=0,maxLen=0;
        long long sum=a[0];
        while(right<n){
            while(left<=right && sum>k){
                sum-=a[left];
                left++;
            }
            if(sum==k){
                maxLen=max(maxLen,right-left+1);
            }
            right++;
            if(right<n) sum+=a[right];
        }
        return maxLen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends












