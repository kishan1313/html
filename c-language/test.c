#include <stdio.h>
void main()
{
    int p;
    printf("Enter the percentage?");
    scanf("%d", &p);
    if (p >= 1 && p <= 100)
    {
        if (p >= 85)
            printf("Your Grade is A+ ");
        else if (p >= 70 && p <= 84)
            printf("Your Grade is A");
        else if (p >= 55 && p <= 69)
            printf("Your Grade is B");
        else if (p >= 45 && p <= 54)
            printf("Your Grade is C");
        else
            printf("Your Grade is D");
    }
    else
        printf("Plz Enter percentage between 1-100");
}