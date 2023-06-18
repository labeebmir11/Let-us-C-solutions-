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
    double cosec_x = 1/ sin_x;
    double sec_x  = 1/ cos_x;
    double cot_x = 1/ tan_x;

    printf("sin x = %.2lf\tcos x = %.2lf\ttan x = %.2lf\ncosec x = %.2lf\tsec x = %.2lf\tcot x = %.2lf\t", sin_x, cos_x, tan_x, cosec_x, sec_x, cot_x);

    return 0;

}