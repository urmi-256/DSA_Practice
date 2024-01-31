class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      // gap method - shell sort
      // place left at start and right at left+gap move left and right and sort till right<n also reduce gap
      // and again start left=0,right=gap+left till gap is reduced to less than 1
     int gap = ceil((float)(m+n)/2);
      while(gap!=0){
       
      int left = 0,right = left+gap;
      while(right<(m+n)){
         if(left<m && right>=m){
            if(nums1[left] > nums2[right-m]) swap(nums1[left],nums2[right-m]);
        }
        else if(left>=m){
           
            if(nums2[left-m] > nums2[right-m]) swap(nums2[left-m],nums2[right-m]);
        }
        else{
           if(nums1[left] > nums1[right]) swap(nums1[left],nums1[right]); 
        }
        left++;right++;
         
      }
      if(gap == 1) break;
      gap = ceil((float)gap/2.0);
      }
     int j=0;
      for(int i=m;i<nums1.size();i++){
          swap(nums1[i],nums2[j++]);
      }

     }
     // TC - (O(n+m)log(n+m)) SC - (On+m)
 };
