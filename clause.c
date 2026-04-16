#include<stdio.h>

int main()
{
    int n , sum = 0 , start , diff , end;

   scanf("%d%d%d",&start,&diff,&end);

    for( n = start ; n<=end ; n = n + diff){
        sum = sum + n ;
    }


        printf("Sum =  %d\n",sum);

    return 0;
}
