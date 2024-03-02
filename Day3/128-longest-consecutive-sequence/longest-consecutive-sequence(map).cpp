class Solution {
public:
    int longestConsecutive(vector<int>& nums){
       if(nums.size()==0) return 0;
       map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;  
       }
       int prev_elem = nums[0];
       int count = 1;
       int maxlen = INT_MIN;
       for(auto it:mp){
           if(it.first == prev_elem+1){
               count++;
               prev_elem = it.first;
           }
           else{
               maxlen = max(maxlen,count);
               prev_elem = it.first;
               count = 1;
           }
       }
       maxlen = max(maxlen,count);
       return maxlen;
    }
    // TC - O(n) SC - O(n)
};
