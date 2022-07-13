class Solution {
public:
    bool isPalindrome(int x) {
        int rev;
       double  r=0;
        int n=x;
        if(x<0){
            return false;
        } 
        else if(x==0){
            return true;
        }
        else{
        while(n!=0){
            rev=n%10;
            r=r*10+rev;
            n=n/10;
            
        }
       return x==r;
    }
        }
         
    
};