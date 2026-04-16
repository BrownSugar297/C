#include<stdio.h>

int main(void)
{
    int marks;
    char grade;

    printf("Enter your number: \n");
    scanf("%d",& marks);

    if(marks >=80)
    {
        grade= '+';
        printf("Your grade is: %c",grade);
    }

    else if(marks >=70)
    {
        grade= 'A';
        printf("Your grade is: %c",grade);
    }

    // same till 40
    else
    {
        printf("Fail");  //else if
                         //indentation
    }
}
