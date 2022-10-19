class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
//         THIS WILL NOT WORK BECAUSE TIME COMPLEXITY IS BIG O(N).
    //     int n = nums.size();
    //     int i=0, j=0;
    //     while(i<n){
    //         i++;
    //         while(j<n){
    //             j++;
    //             if(nums[i]==nums[j])
    //                 return true;
    //             else
    //                 return false;} }
    // }
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};
