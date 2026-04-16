#include<stdio.h>
int main()
{
    double F,C;

    printf("Enter Celcius: ");
    scanf("%lf",&C);
    F= 1.8 * C + 32;
    printf("Fahrenheit: %lf",F);

    return 0;
}
