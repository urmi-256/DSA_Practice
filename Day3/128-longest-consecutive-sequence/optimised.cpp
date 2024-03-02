class Solution {
public:
    int longestConsecutive(vector<int>& nums){
       if(nums.size()==0) return 0;
       set<int>st;
       for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);  
       }
       int maxlen = 1;
       for(auto it:st){
        if(st.find(it-1) == st.end()){
            int count =1;
            int prev_elem = it;
            while(st.find(prev_elem+1) != st.end()){
                count++;
                prev_elem+=1;
            }
            maxlen = max(maxlen,count);

        }
       }
       
       return maxlen;
    }
    // TC - O(n + 2*n for inner loop) SC - O(n)
};
