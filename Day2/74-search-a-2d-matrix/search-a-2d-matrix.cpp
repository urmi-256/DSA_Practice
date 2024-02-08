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
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0, h = m-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(matrix[mid][n-1]<target){
                l = mid+1;
            }
            else if(matrix[mid][n-1] == target){
                return true;
            }
            else{
                h = mid-1;
            }
        }
        if(l>=0 && l<m){ // remember l can go -1 as if [1] and find target = 2
        return binarySearch(target,matrix,l);
        }
        else return false;
        
    }
};