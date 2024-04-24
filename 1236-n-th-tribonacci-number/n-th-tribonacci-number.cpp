class Solution {
public:
    int tribonacci(int n) {
        if(n==2){return 1;}
        if(n<2){return n;}
        int a=0;
        int b=1;
        int c=1;
        int x;
        for(int i=3;i<=n;i++){
            x= (a+b+c);
            a=b;
            b=c;
            c=x;
        }
    return x;
    }
};