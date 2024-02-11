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
    int uniquePaths(int m, int n) {
    vector<vector<int>>dp(m,vector<int>(n,0));
    dp[m-1][n-1] = 1;
    for(int i=m-1;i>=0;i--){
        for(int j =n-1;j>=0;j--){
          if(j+1>=n && i+1<m){
              dp[i][j] += (dp[i+1][j]);
          }
          else if(i+1>=m && j+1<n) dp[i][j] += (dp[i][j+1]);
          else if(i+1<m && j+1<n) dp[i][j] += (dp[i+1][j]+dp[i][j+1]);
        }
    }
    return dp[0][0];
    }
    // TC - O(m*n) SC - (On*m)
    // dp- memoisation
};