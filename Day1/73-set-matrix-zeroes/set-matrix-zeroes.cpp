class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // using row and col set without using 2 extra  vector arrays optimal approach
        int m=matrix.size();
        int n=matrix[m-1].size();
       
        bool col = false;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if(j == 0){
                        col = true;
                    }
                    else
                    matrix[0][j]= 0;
                    
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j = 1;j<n;j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                     matrix[i][j] = 0;
                }
            }
        }
        if(matrix[0][0] == 0){
        for(int j=0;j<n;j++){
          matrix[0][j] = 0;
        }
        }
        if(col == true){
          for(int i=0;i<m;i++){
          matrix[i][0] = 0;
        }  
        }

    }
       
         
        
       
       
        // TC - O(m*n + m*n) SC- O(1);
        
       
};
