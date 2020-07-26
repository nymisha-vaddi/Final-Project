#include<stdio.h>
void main()
{
    int N,F,B,T,FD,BD,pos,total,i;
    //N = Number of test cases
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        //total = Total number of meters
        total=0;
        // pos = present position
        pos=0;
        scanf("%d%d%d%d%d",&F,&B,&T,&FD,&BD);
        if(F>=FD)
        {
            pos=FD*T;
            printf("%dF\n",pos);
        }
        else if(F==B)
        {
            printf("No Ditch\n");
        }
        else if(F>B)
        {
            while(1)
            {
                pos=pos+F;
                total=total+F;
                if(pos>=FD)
                    break;
                pos=pos-B;
                total=total+B;
            }
            total=total-(pos-FD);
            printf("%dF\n",total*T);
        }
        else
        {
            while(1)
            {
                pos=pos-F;
                total=total+F;
                pos=pos+B;
                total=total+B;
                if(pos>=BD)
                    break;
            }
            total=total-(pos-BD);
            printf("%dB\n",total*T);
        }
    }
    return 0;
}
