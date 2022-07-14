class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> ans;
         int a=0 ,b=nums.size()-1;
          for(int i=0;i<nums.size();i++)
          {
 
              if(nums[a]+nums[b]==target )
            {
                            ans.push_back(a+1);
                         ans.push_back(b+1);
                  break;
             }
              else if(nums[a]+nums[b]<target ){
                  a++;
              }
              else{
                  b--;
              }
             
         }
                return ans;
    }
};