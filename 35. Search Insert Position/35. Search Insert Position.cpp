class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
          int s=0;
        int e=nums.size()-1;
        int mid   ;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                 return   mid;
                break;
            }
           else if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target)  {
                e=mid-1;
            }
            
        }
         return s;
    }
};