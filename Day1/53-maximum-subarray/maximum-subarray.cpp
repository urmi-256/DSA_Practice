class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,maxsum = INT_MIN; 
        // maxsum = int_min as it has negative numbers too
        

       for(int i=0;i<nums.size();i++){
           sum += nums[i];
            maxsum = max(sum,maxsum); 
           if(sum <0){
               sum = 0;
           }
           
       }
       return maxsum; 
       // Time complexity - O(n) SC - O(1)

    }
};