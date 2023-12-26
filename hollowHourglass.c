#include<stdio.h>
int main()
{
    int i,j,k,n=19;
    int l=(n/2+1);
    int m=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf(" ");
        for(k=0;k<l;k++)
        {
            if(i==0||k==0||i==n-1||k==l-1)
                printf("* ");
            else 
                printf("  ");
        }
            i<n/2?m++:m--;
            i<n/2?l--:l++;        
        printf("\n");
    }
    return 0;
}