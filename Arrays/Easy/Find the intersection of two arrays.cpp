#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> ans;
    vector<int> vis(m, 0); // Initialize the vis vector with size m and all elements set to 0
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j] && vis[j] == 0) {
                ans.push_back(arr1[i]);
                vis[j] = 1; // Mark the element as visited
                break;
            }
            if (arr2[j] > arr1[i]) break;
        }
    }
    
    return ans; // Return the result after processing all elements
}
