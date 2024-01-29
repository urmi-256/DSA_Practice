class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
         // get transpose by converting rows to column and columns to row 

        for(int i=0;i<n;i++){
         for(int j=0;j<i;j++){
             swap(matrix[i][j],matrix[j][i]);
         }
        }

        // reverse the transposed matrix
        for(int i=0;i<n;i++){
         for(int j=0;j<n/2;j++){
           swap(matrix[i][j],matrix[i][n-j-1]);
        //    cout<<matrix[i][j] << " "<<matrix[i][n-j-1]<<endl;
         }
        }

        //TC - O(n^2) SC - (O(1))
         
    }
};