#include<stdio.h>
#include<stdlib.h>
# define max 5
void quicksort(int *,int,int);
int partition(int *,int,int);


void swap(int *a,int *b)
{
     int temp;
            temp=*a;
            *a=*b;
            *b=temp;

}
int main()
{
    int left,right;
    int a[max];
    printf("Enter the element of the array");
    for(int i=0;i<max;i++)
    {
        scanf("%d",&a[i]);
    }
    left=0;
    right=max-1;
    quicksort(a,left,right);

    for(int i=0;i<max;i++)
    {
        printf("  %d",a[i]);
    }

}
void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int pivotindex=partition(a,l,r);
        quicksort(a,l,pivotindex-1);
        quicksort(a,pivotindex+1,r);
    }

}
int partition(int a[],int l,int r)
{
   int pivot=a[r];
    int pindex=l;
    for(int i=l;i<r;i++)
    {
        if(a[i]<=pivot)
        {
            swap(&a[i],&a[pindex]);
            pindex++;

        }
    }
    swap(&a[pindex],&a[r]);
    return pindex;

}
