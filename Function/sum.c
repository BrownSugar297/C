#include<stdio.h>


int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int x,y;
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);
    printf("Result is : %d",sum(x,y));
}

