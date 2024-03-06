//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   int maxlen = 0,sum=0;
        map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(sum == 0){
            maxlen = i+1;
        }
        // as if sum is 0 then we got the subarray with sum 0 as maxlen = i+1;
        else if(mp.find(sum)!= mp.end()){
            maxlen= max(maxlen,(i-mp[sum]));
        }
        else mp.insert({sum,i});
    }
    return maxlen;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
