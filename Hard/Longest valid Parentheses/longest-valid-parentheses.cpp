//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        stack<int>s;
        s.push(-1);
        int count=0 , i ;
        for(i=0; i < S.length();i++){
            if(S[i]== '('){
                s.push(i);
            }
            else {
                s.pop();
                if(!s.empty()){
                    count = max(count, i-s.top());
                }
                else{
                    s.push(i);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends