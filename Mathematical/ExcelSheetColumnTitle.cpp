class Solution {
public:
    string convertToTitle(int columnNumber) {
       // int calc=columnNumber/26;
       // int rem=columnNumber%26;
       string res;
        //cout<<calc<<" "<<rem;

        while(columnNumber){
            columnNumber--;
            res=res+(char)(columnNumber%26 +'A');
            columnNumber=columnNumber/26;
            
        }
         reverse(res.begin(), res.end());
        return res;

    }
};
