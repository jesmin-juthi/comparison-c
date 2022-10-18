#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter two numbers to compare: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is greater than %d", a, b);
    }

    else
    {
        printf("%d is less than %d", a, b);
    }

    return 0;
}