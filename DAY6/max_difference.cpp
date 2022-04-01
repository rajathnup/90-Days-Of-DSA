//problem link:https://leetcode.com/problems/maximum-difference-between-increasing-elements/


class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        vector<int> temp=nums;
        sort(temp.begin(), temp.end(), greater <>());
        if(nums==temp)
        {
            return -1;
        }
        
        else{
        int n=nums.size();
        int res=nums[1]-nums[0];
      int min_val=nums[0];
      for(int j=1;j<n;j++)
      {
          res=max(res,nums[j]-min_val);
          min_val=min(min_val,nums[j]);
      }
      return res;}
    }
};
