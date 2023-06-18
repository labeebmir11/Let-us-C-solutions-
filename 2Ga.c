//Program to calculate the sum of digits of a 5 digit number.

# include <stdio.h>

int main()
{
    int n, d1, d2, d3, d4, d5;
    int sum = 0;

    printf("Enter a 5 digit number\n");
    scanf("%d", &n);

    d5 = n % 10;
    n  = n / 10;

    d4 = n % 10;
    n  = n / 10;

    d3 = n % 10;
    n  = n / 10;

    d2 = n % 10;
    n  = n / 10;

    d1 = n % 10;
    n  = n / 10;

sum = d1 + d2 + d3 + d4 + d5;
printf("Sum of digits is %d\n", sum);

return 0;

}