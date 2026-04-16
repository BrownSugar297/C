#include<stdio.h>
int main(void)
{
    int sum=0,i,a[]={2,2,3,4,5};

    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum is :%d\n",sum);

    printf("Avarage is :%.2f\n",(float)sum/5);

}

