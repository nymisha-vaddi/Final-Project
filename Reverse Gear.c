
#include<stdio.h>
int main()
{
    int N,F,B,T,D,i,j,b=0,f=0,total;
    // N = Number of test cases
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        b=0;
        f=0;
        scanf("%d%d%d%d",&F,&B,&T,&D);
        for(j=0;D>0;j++)
        {
            //To determine the direction of the movement
            if(j%2==0)
            {
                D=D-B;
                b++;
            }
            else
            {
                D=D+F;
                f++;
            }
        }
        b=b*B;
        f=f*F;
        total=(b+f)*T+(D*T);
        printf("%d\n",total);
    }
    return 0;
}

