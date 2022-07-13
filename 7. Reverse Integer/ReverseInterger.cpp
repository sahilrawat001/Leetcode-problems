
class Solution {
public:
    int reverse(int x) {      
       long   r=0;
        
         while(x!=0){
           long rev=x%10;
            r=r*10+rev;
            x=x/10;  
        }
         return (r > INT_MAX || r < INT_MIN) ? 0 : r;
       
        }
         
    
};