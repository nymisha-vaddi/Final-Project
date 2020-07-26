
#include<stdio.h>
#include<math.h>
int main()
{
    int M,t;
    float rate,amt,interest,required;
    scanf("%d%d%f",&M,&t,&rate);
    required=M;
    while(t--)
    {
        amt=required/(1+rate/(float)1200);
        interest=required-amt;
        required+=M-interest;
    }
    required-=M;
    double finalAmount=ceil(required-0.5);
    if(finalAmount>required)
        finalAmount=ceil(required);
    else
        finalAmount=floor(required);
    printf("%.lf",finalAmount);
    return 0;
}
