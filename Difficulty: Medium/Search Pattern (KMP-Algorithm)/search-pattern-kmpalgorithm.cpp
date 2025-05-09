//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
          vector<int> lps = computeLPSArray(pat);
        vector<int> result;
        int i = 0;
        int j = 0;
        
        while(i < txt.size()){
            if(pat[j] == txt[i]){
                i++;
                j++;
            }
            
            if(j == pat.size()){
                result.push_back(i-j);
                j = lps[j-1];
            } else if ( i < txt.size() && pat[j] != txt[i]) {
                if(j != 0) {
                    j = lps[j-1];
                    
                } else {
                    i++;
                }
            }
        }
        
        return result;
    }
    
    private:
        vector<int> computeLPSArray(string& pat) {
            int len = 0;
            vector<int> lps(pat.size() ,0);
            int i = 1;
            
            while(i < pat.size()){
                if(pat[i] == pat[len]){
                    len++;
                    lps[i] = len;
                    i++;
                } else {
                    if(len != 0) {
                        len = lps[len - 1];
                    } else {
                        lps[i] = 0;
                        i++;
                    }
                }
            }
            
            return lps;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends