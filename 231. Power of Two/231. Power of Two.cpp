class Solution {
public:
    bool isPowerOfTwo(int n) {
        long i=1;
        if(n==1){
            return true;
        }
  while(i<n){
      i=i*2;
  }
        return i==n;
    }
};