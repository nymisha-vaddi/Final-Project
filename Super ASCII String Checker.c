#include<stdio.h>
#include<string.h>
void main()
{
    int T,a[26],i,j,n,flag;
    char str[400];
    // T = Number of test cases
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        for(j=0;j<26;j++)
        {
            a[j]=0;
        }
        scanf("%s",str);
        for(j=0;j<strlen(str);j++)
        {
            n=str[j]-97;
            a[n]++;
        }
        for(j=0;j<26;j++)
        {
            if(a[j]==j+1||a[j]==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
