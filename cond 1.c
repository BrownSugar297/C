#include<stdio.h>
int main()
{
    int x;
    int y;

    printf("Enter X: \n");
    scanf("%d",&x);

    y = x%2;

    if(y==0)
    {
        printf("X is even\n");
    }
    else
    {
        printf("X is odd\n");
    }
    return 0;

}

/* char ch;
 scanf("%c",&ch);

 if(ch=='i'){
          printf(vowel\n);
 }
 else{consonent\n};*/
