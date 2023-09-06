//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        
        stack<int> st;
        int i =0 ,res = 0;
        
        while(i < S.size()){
            if(S[i] == '*' || S[i] == '-' || S[i] == '+' || S[i] == '/' ){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                
                if(S[i] == '+'){
                    res = a+b;
                    st.push(res);
                }
                else if(S[i] == '-'){
                    res = b-a;
                    st.push(res);
                }
                else if(S[i] == '*'){
                    res = a*b;
                    st.push(res);
                }
                else if(S[i] == '/'){
                    res = b/a;
                    st.push(res);
                }
            }
            else{
                st.push(S[i] - '0'); // ascii fix
            }
            i++;
        }
        return st.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends