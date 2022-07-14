class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
                vector<int> myvector;
         for(int i=0;i<nums.size();i++){
             myvector.push_back(nums[i]*nums[i]);
        }
                     sort(begin(myvector), end(myvector));
     return myvector;
    }
};

