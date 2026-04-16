#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch>='0' && ch<='9'){
        printf("digit\n");
    }
    else{
        printf("not digit\n");
    }


    return 0;
}

