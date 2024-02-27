class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      // sort two pointer 
      vector<int>ans;
      map<int,vector<int>>mp;
      for(int i=0;i<nums.size();i++){
          mp[nums[i]].push_back(i);
      }
      sort(nums.begin(),nums.end());
     int l=0,h = nums.size()-1;
      while(l<h){
          if((nums[l]+nums[h]) == target){
              if(nums[l] == nums[h]){
                ans.push_back(mp[nums[l]][0]);
                ans.push_back(mp[nums[l]][1]);
              }
              else{
              ans.push_back(mp[nums[l]][0]);
              ans.push_back(mp[nums[h]][0]);
              }
              return ans;
          }
          else if((nums[l] + nums[h]) <target){
              l++;
          }
          else{
              h--;
          }
      }
      return ans;
    }
    // TC - O(n + n*logn)  SC - O(n)
};