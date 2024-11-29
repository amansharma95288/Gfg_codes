//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        string ans = ""; 
        int i = s1.size() - 1;  
        int j = s2.size() - 1;  
        int carry = 0;  
        while (i >= 0 || j >= 0 || carry > 0) {
            int count1s = carry; 
            if (i >= 0 && s1[i] == '1') count1s++;
            if (j >= 0 && s2[j] == '1') count1s++;
            ans += (count1s % 2 == 0 ? '0' : '1');
            carry = count1s / 2;
            i--;
            j--;
        }
        reverse(ans.begin(), ans.end());
        i=0;
        while(ans[i]=='0'){
            ans.erase(0,1);
         }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends