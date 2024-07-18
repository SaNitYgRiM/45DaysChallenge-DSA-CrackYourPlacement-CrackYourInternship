class Solution {
public:
    int climbStairs(int n) {
        int a=0,b=1;
        int fib;
        for(int i=2;i<=n+1;i++){
            fib=a+b;
            a=b;
            b=fib;
        }
        return fib;
        
    }
};
