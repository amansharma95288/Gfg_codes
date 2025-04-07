//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends


class Solution {
  public:
    void zigZag(vector<int> &arr) {
        for(int index=0;index<arr.size()-1;index++){
         if(index%2==0){
             if(arr[index]>arr[index+1]){
                 swap(arr[index],arr[index+1]);}
             }
             else{
                 if(arr[index]<arr[index+1]){
                     swap(arr[index],arr[index+1]);}

                 }
             }
    }
};



//{ Driver Code Starts.

bool isZigzag(int n, vector<int> &arr) {
    int f = 1;

    for (int i = 1; i < n; i++) {
        if (f) {
            if (arr[i - 1] > arr[i])
                return 0;
        } else {
            if (arr[i - 1] < arr[i])
                return 0;
        }
        f = f ^ 1;
    }

    return 1;
}

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

        Solution obj;
        //
        int n = arr.size();
        obj.zigZag(arr);
        bool flag = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == i % 2) {
                flag = 0;
            } else {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "false\n";
        } else {
            bool check = 1;
            check = isZigzag(n, arr);
            if (check)
                cout << "true\n";
            else
                cout << "false\n";
        }
        cout << "~" << endl;
    }
}

// } Driver Code Ends