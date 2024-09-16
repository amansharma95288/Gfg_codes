//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  int missingNumber(int n, vector<int>& arr) {
        int xor1 = 0, xor2 = 0;
        for (int i = 0; i < arr.size(); i++) {
           xor1 ^= arr[i];
        }
        for(int i=1;i<=n;i++){
           xor2 ^= i;
        }
        return xor1 ^ xor2;
     }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.missingNumber(n, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends