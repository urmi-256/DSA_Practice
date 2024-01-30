class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end());
      int n = intervals.size();
      vector<vector<int>>ans;
      // my code
    //   vector<int>v(2,0);
    //   vector<vector<int>>ans;
    //   v[0] = intervals[0][0];
    //   v[1] = intervals[0][1];
    //   int f = 0;
    //   for(int i=1;i<n;i++){
    //     if(v[1] >= intervals[i][0]){
    //         v[1] = max(v[1],intervals[i][1]);
    //         v[0] = min(intervals[i][0],v[0]);
    //         if(i == n-1){
    //             f = 1;
    //         }
    //     }
    //     else{
    //       ans.push_back(v);   
    //       v[1] = intervals[i][1];
    //       v[0] = intervals[i][0];
    //     }
    //   } 
    //   ans.push_back(v); 
    //   return ans;

    // simpler somewhat
    for(int i=0;i<n;i++){
        if(ans.size()!=0 && (ans.back()[1] >= intervals[i][0])){
            ans.back()[1] = max(ans.back()[1],intervals[i][1]);
        }
        else{
            ans.push_back(intervals[i]);
        }
    }
    return ans;
    // TC - O(nlogn sort + O(n)) SC - O(n)
    }
};