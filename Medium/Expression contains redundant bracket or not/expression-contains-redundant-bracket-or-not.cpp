//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
         stack<int> st;
        
        for(int i=0;i<s.size();++i){
            if(s[i]=='(')
                st.push(i);
            else if(s[i]==')'){
                int j=st.top();
                st.pop();
                
                if(i-j==2)
                    return 1;
                
                if(!st.empty() && st.top()==j-1 && i+1<s.size() && s[i+1]==')')
                    return 1;
            }
        }
        
        return 0;
    }

};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends