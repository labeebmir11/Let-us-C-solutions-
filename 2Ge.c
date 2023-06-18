# include <stdio.h>
# include <math.h>

int main()
{
    double x, x_rad;
    printf("Enter the value of angle x in degrees\n");
    scanf("%lf", &x);

    x_rad = 3.14 / 180 * x;// Convert degrees into radians because trigonometric functions C accept angles in radians as arguments instead of degrees

    double sin_x = sin(x_rad);
    double cos_x = cos(x_rad);
    double tan_x = tan(x_rad);

    printf("sin x = %.2lf\tcos x = %.2lf\ttan x = %.2lf\n", sin_x, cos_x, tan_x);

    return 0;

}