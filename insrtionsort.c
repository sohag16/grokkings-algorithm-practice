#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m=5,i,j,a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<m;j++)
    {
        for(i=j-1;i>=0;i--)
        {
            if(a[i+1]<a[i])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("  %d",a[i]);
    }
}
