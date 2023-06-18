//Program to interchange cotents of c and d.
# include <stdio.h>

int main()
{
    float c,d;
    printf("Enter the values of c and d\n");
    scanf("%f %f", &c, &d);

    c = c + d;
    d = c - d;
    c = c - d;

    printf("c = %f\td = %f", c,d);
    return 0;
}