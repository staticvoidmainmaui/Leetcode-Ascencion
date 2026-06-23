class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(divisor==0) return 0;
        if(dividend==0) return 0;
        if(divisor==1) return dividend;
        int quotient=0;
        int sign=1;

        if(dividend>0 && divisor <0) sign =-1;
        if(dividend<0 && divisor >0) sign =-1;
        long ldividend=abs((long)dividend);
        long ldivisor=abs((long)divisor);

        while(ldividend>=ldivisor){
            ldividend+= -ldivisor;
            quotient++;
        } 
        return (sign*quotient);
    }
};