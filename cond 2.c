#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter: ");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' ||ch=='u')
    {
        printf("v\n");
    }
    else
    {
        printf("consonent\n");
    }

    return 0;
}

