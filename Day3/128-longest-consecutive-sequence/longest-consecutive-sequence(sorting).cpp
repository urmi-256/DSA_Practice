class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /*
        This didn't worked as for [1,2,0,1] this array answer should be 3 but comming 2 as it is sorting - 0 1 1 2
        i will be pointing to 0,1 len = 2
        i will be pointing to 1,2 len = 2
       // sort and find length
       int i=0,j = 0;
       int maxlen=0;
       sort(nums.begin(),nums.end());
       while(j<nums.size()){
        if(j!=0 && j< nums.size() && nums[j] != (nums[j-1]+1)){
             maxlen = max(maxlen,(j-i));
             i=j;
        }
        j++;
       }
       maxlen = max(maxlen,(j-i));
       return maxlen; 
       */

      // sort and find length
      if(nums.size()==0) return 0;
       int i=0,j = 1;
       int maxlen=0;
     
       sort(nums.begin(),nums.end());
       int pastElement = nums[0];
       int count = 1;
       while(j<nums.size()){
        // had to add this as for case [0,1,1,2] it will print 2 as the maxlen when it should be 3
        if(nums[j] == pastElement){
            j++; continue;
        }
        if(nums[j] != (pastElement+1)){
              maxlen = max(maxlen,count);
             count = 1;
             pastElement = nums[j];
        }
        else if(nums[j] == (pastElement+1)){
            count++;
            pastElement = nums[j];
        }
        j++;
       }
      maxlen = max(maxlen,count);
       return maxlen; 
    }
    // }
    // TC - O(nlogn + n)
};
