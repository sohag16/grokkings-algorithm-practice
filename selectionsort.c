#include<stdio.h>
#include<stdlib.h>

int main()
{
    int max=0,temp,z,i;
    int a[10];
    printf("Enter the element of the array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<9;i++)
    {
        max=a[i];
      for(z=i+1;z<10;z++)
       {
           if(max<a[z])
           {
            temp=max;
            max=a[z];
            a[z]=temp;}
    }
    a[i]=max;
    }
    printf("the sorted list is:");
    for(i=0;i<10;i++)
    {
        printf("  %d",a[i]);
    }
}
