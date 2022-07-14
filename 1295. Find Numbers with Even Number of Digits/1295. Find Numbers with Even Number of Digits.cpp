class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a;
        int d=0;
        for(int i=0;i<nums.size();i++){
                    int c=0;

            a=nums[i];
            while(a>0){
                a=a/10;
                c++;
                
            }
            if(c%2==0){
                d++;
            }
        }
        return d;
        
    }
};