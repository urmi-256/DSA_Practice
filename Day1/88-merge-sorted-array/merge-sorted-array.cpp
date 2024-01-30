class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
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
     }
};