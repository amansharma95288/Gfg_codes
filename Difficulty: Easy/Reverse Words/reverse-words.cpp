//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
       string reverseWords(string str) {
       stringstream ss(str);
       string ans="";
       string temp="";
       while(getline(ss,temp,'.')){
           ans=temp+"."+ans;
       }
       ans.pop_back();
       return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends