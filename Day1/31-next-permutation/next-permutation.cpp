class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    //     int ind = -1;
    //     // find breakpoint where nums[i] < nums[i+1];
    //   for(int i=nums.size()-2;i>=0;i--){
    //       if(nums[i] < nums[i+1]){
    //           ind = i;
    //         break;
    //       }
    //   }
    //   if(ind!=-1){
    //   // find the smallest num greater than num[breakpoint] in the array and then swap
    //   // as it was always in increasing order.
    //   for(int i=nums.size()-1;i>ind;i--){
    //     if(nums[i] > nums[ind]){
    //         swap(nums[i],nums[ind]);
    //         break;
    //     }
    //   }

    //   }
    //   // reverse the right half 
    //   for(int i=ind+1,j = nums.size()-1;i<j;i++,j--){
    //       swap(nums[i],nums[j]);
    //   }
    // // time  - Find break point,greater and next reversal (3*N) SC - (O(1))

    //using nextpermutation 
   next_permutation(nums.begin(),nums.end());
    }
};