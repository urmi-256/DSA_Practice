class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // using row and col set extra 2 vector arrays optimal approach
        int m=matrix.size();
        int n=matrix[m-1].size();
       
        vector<int>colSet(m,0);
        vector<int>rowSet(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    rowSet[j] = 1;
                    colSet[i]= 1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(rowSet[i] == 1){
            for(int j=0;j<m;j++){
                matrix[j][i] = 0;
            }
            }
        }
         for(int i=0;i<m;i++){
            if(colSet[i] == 1){
              for(int j=0;j<n;j++){
                  matrix[i][j] = 0;
              }
            }
        }
       
       
        // TC - O(m*n + m*n) SC- O(m+n);
        
       
    }
};