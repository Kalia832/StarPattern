#include<stdio.h>
int main()
{
    int i,j,k,l=1,n=10;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n/2-l;j++)
            printf(" ");
        for(k=0;k<l;k++)
            printf("* ");
        if(n%2==0&&i==n/2-1);
        else
            i>=n/2?l--:l++;        
        printf("\n");
    }
    return 0;
}