#include<stdio.h>

int main()
{
    int a,b;

    printf("\nEnter two No.s to swap ");
    scanf("%d%d",&a,&b);

    printf("\nNo.s before swapping\n a = %d b = %d ",a,b);

    if((a=a+b) && (b=a-b) && (a=a-b))   //This is where swapping happens in a single line.

    printf("\nNo.s after swapping\n a = %d b = %d ",a,b);

    return 0;
}
