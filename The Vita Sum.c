#include<stdio.h>
int factorial(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;

}
int ncr(int a,int b)
{
    int x;
    x=(factorial(a)/(factorial(a-b)*factorial(b)));
    return x;
}
int main()
{
    int N,K,i,x=0;
    scanf("%d%d",&N,&K);
    for(i=1;i<=K;i++)
    {
        if(i%2==0)
        {
            x=x+ncr(N,i);
        }
        else
        {
            continue;
        }
    }

    printf("%d",x+1);
    return 0;
}

