class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size(); //size of the array
    set<vector<int>> ans;
    for (int i = 0; i < n-2; i++) {
        for (int j = i + 1; j < n-1; j++) {
            set<long long>st;
            long long sum = (nums[i]+nums[j]);
            long long sum1 = (target-sum);
            for (int k = j + 1; k < n; k++) {
                  if(st.find(sum1-nums[k])!=st.end()){
                      vector<int>v = {nums[i],nums[j],nums[k],(int)(sum1-nums[k])};
                      sort(v.begin(),v.end());
                      ans.insert(v);
                  }
                  st.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> fourSum(ans.begin(), ans.end());
    return fourSum; 

    // TC - (O(n^3 log(m))) SC - O(n)
    // logm for the set operation

    }

};
