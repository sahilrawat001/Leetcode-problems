class Solution {
public:
    bool valid(char c){
        if (  (c>='a' && c<='z')  ||(c>='A' && c<='Z')  || (c >=  '0' && c<= '9') ){
            return 1;
        }
        else{
            return 0;
        }
    }
    char lower(char c){
         if(c>='a' && c<='z' ){
            return c;
        }
        else{
            c=c-'A'+'a';
            return c;
        }
    }
    bool palindrom( string a){
        int st=0;
        int ed=a.length()-1;
        while(st<ed){
            if(a[st]!=a[ed]){
                return 0;
            }
            else{
                st++;
                ed--;
            }
        }
        return 1;
    }
    bool isPalindrome(string s) {
    string temp="";
        //validity
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
                //upper to lower

        for(int i=0;i<temp.length();i++){
             temp[i]=lower(temp[i]);
            }
        //check palindrome
        
        return palindrom(  temp);
        
    }
};