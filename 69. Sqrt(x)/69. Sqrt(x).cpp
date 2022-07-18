class Solution {
public:
  long long int mySqrt(int x) {
        int s=0; 
        int e=x;
      long long  int mid,ans;
       
         while(s<=e){
              mid=(s+e)/2;
          long long int t=mid*mid;
            if(t==x){
                return mid;
            }
            else if(t<x){
                 ans=mid;
                s=mid+1;
            }
            else{
              e=mid-1;

            }
        }
        return ans;
         
    }
};