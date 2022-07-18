class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int res = nums.size();
    for(int i=0; i<nums.size(); i++){
        res ^= i;
        res ^= nums[i];
    }
    return res;
    }
};


//2nd method
class Solution {
public:
    int missingNumber(vector<int>& nums) {
   int n=nums.size();
       n=n*(n+1)/2;
        int t=0;
        for(int i=0;i<nums.size() ;i++){
            t=t+nums[i];
            
        }
        return  n-t;
         }
         };