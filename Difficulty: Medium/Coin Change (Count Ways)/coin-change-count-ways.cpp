//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   int solve(int sum, vector<int>& coins, int i, vector<vector<int>>& dp) {
    if (sum == 0) return 1;   
    if (i < 0 || sum < 0) return 0;  
    if (dp[i][sum] != -1) return dp[i][sum];
    return dp[i][sum] = solve(sum - coins[i], coins, i, dp) + solve(sum, coins, i - 1, dp);
}

int count(vector<int>& coins, int sum) {
    vector<vector<int>> dp(coins.size(), vector<int>(sum + 1, -1));
    return solve(sum, coins, coins.size() - 1, dp);
}
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends