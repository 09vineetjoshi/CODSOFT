#include<stdio.h>

void insertion_sort(int A[],int N)
{
    int i,j,temp;
    for(i=1;i<N;i++)
    {
        temp=A[i];
        for(j=i-1;j>=0&&temp<A[j];j--)
        A[j+1]=A[j];
        A[j+1]=temp;
    }
}
int main()
{
    int A[]={10,3,6,1,20,8};
    int i;
    insertion_sort(A,6);
    for(i=0;i<=5;i++)
    printf(" %d",A[i]);
}