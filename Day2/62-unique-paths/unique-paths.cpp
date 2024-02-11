// class Solution {
// public:
//     int findPath(int m,int n,int i,int j){
//     if(i>=m || j>=n) return 0;
//     if(i == m-1 && j == n-1){
//         return 1;
//     }
//     return findPath(m,n,i,j+1)+findPath(m,n,i+1,j);
//     }
//     int uniquePaths(int m, int n) {
//        return findPath(m,n,0,0);
//     // TC - O(2^n) exponential
//     }
// };
class Solution {
public:
    int findPath(int m,int n,int i,int j,vector<vector<int>>&dp){
       if(i == m-1 && j == n-1) return 1;
       if(i >= m || j>=n )return 0;
       if(dp[i][j]!=-1) return dp[i][j];
       return dp[i][j] = findPath(m,n,i+1,j,dp)+findPath(m,n,i,j+1,dp); 
    }
    int uniquePaths(int m, int n) {
    vector<vector<int>>dp(m,vector<int>(n,-1));
    return findPath(m,n,0,0,dp);
    }
    // TC - O(m*n) SC - (On*m)
};