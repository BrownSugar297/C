#include<stdio.h>
int main(void)
{
    int a[100],sum=0,i,n;

    printf("How many number: ");
    scanf("%d",&n);


    printf("Enter numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum is :%d\n",sum);

    printf("Avarage is :%.2f\n",(float)sum/5);

}

