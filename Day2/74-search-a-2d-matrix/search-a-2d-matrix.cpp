class Solution {
public:
    bool binarySearch(int target,vector<vector<int>>matrix,int i){
      int l=0,h = matrix[0].size()-1;
      while(l<=h){
          int mid = (l+h)/2;
          if(matrix[i][mid] == target){
              return true;
          }
          else if(matrix[i][mid] < target){
             l = mid+1;
          }
          else{
           h = mid-1;
          }
      }
      return false;  
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      // one approach - O(m * log m);
      int m = matrix.size();  
      int n = matrix[0].size();
      for(int i=0;i<m;i++){
         if(matrix[i][0] <= target&& matrix[i][n-1]>=target){
            return binarySearch(target,matrix,i);
         }
      }
      return false;
    }
   //TC - O(m + logn) SC- (O(1));  as we are doing binary search only for one row
};
