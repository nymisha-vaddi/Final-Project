#include<stdio.h>
void main()
{
    int T,N,i,remainder,count=0,binary=0,b=1;
    // T = Number of Test Cases
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        // N = The Maximum Price
        scanf("%d",&N);
        count=0;
        while(N>0)
        {
            remainder=N%2;
            // Number of digits in the binary number
            count++;
            // Binary number
            binary=binary+remainder*b;
            N=N/2;
            b=b*10;
        }
        printf("%d\n",count);
    }
    return 0;
}
