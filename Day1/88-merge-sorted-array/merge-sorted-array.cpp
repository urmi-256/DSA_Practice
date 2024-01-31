class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    /* my code
       int i=0,j=0;
       while(i<m && j<n){
           if(nums1[i] > nums2[j]){
               swap(nums1[i],nums2[j]);
               //cout<<nums1[i]<<" "<<nums2[j]<<endl;
           }
           sort(nums2.begin(),nums2.end());
           i++;
       }
       while(i<nums1.size() && j<n){
           swap(nums1[i],nums2[j]);
           //cout<<nums1[i]<<" "<<nums2[j]<<endl;
           i++;
           j++;
       } 

      // TC -  O(n * nlogn)   SC - (O(1))
      */

      int i=m-1,j=0;
      while(i>=0&& j<n){
       if(nums1[i] > nums2[j]){
           swap(nums1[i],nums2[j]);
       }
       else break;
       i--;j++;
      }
      sort(nums1.begin(),nums1.begin()+m);
      sort(nums2.begin(),nums2.end());
      j=0;
      for(int i=m;i<nums1.size();i++){
          nums1[i] = nums2[j++];
      }
      // TC - (Omlogm + nlogn + min(n,m))  SC - O(1)
     }
};