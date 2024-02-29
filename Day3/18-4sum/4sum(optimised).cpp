class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
      int n= nums.size();
      vector<vector<int>>ans;
      for(int i=0;i<n;i++){
        if(i!=0 && (nums[i]== nums[i-1])) continue;
            for(int j=i+1;j<n;j++){
                if(j!= i+1 && (nums[j] == nums[j-1])) continue;
                
                    // cout<<nums[i]<<" "<<nums[j]<<endl;
                    long long sum=(nums[i]+nums[j]);
                    long long sum1 = target-sum;
                    int l= j+1,h = n-1;
                    while(l<h){
                      if(nums[l]+nums[h] == sum1){
                        //   cout<<nums[l]<<" "<<nums[h]<<"target"<<endl;
                          vector<int>v; v.push_back(nums[i]);
                          v.push_back(nums[j]);
                          v.push_back(nums[l]);
                          v.push_back(nums[h]);
                          ans.push_back(v);
                          l++;h--;
                          while(l<h && nums[l] == nums[l-1]) l++;
                          while(l<h && nums[h]== nums[h+1]) h--;
                      }
                      else if((nums[l]+nums[h]) < sum1) l++;
                      else h--;
                    }
                
            
        }
      }
      return ans;  
      // TC - (O(n^3 + nlogn)) nlogn for sorting
    }
};
