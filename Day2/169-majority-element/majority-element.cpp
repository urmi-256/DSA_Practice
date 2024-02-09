class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0,num = nums[0];
        for(int i = 0 ; i < nums.size();i++){
           if(num == nums[i]){
            count++;
           }
           else{
              count--;
              if(count < 0){
                num = nums[i];
                count = 0;
              }
           }
        }
        return num;
        // TC - O(n) SC - O(1);
        // normal approach calculate freq for every num TC - O(n) SC - (O(n))
        // brute force - TC - (O(n^2))
    }
};