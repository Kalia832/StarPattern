#include<stdio.h>
int main()
{
    int i,j,k,n=6;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
            printf(" ");
        for(k=0;k<=i;k++)
        {
            if(k==0||i==n-1||k==i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}