//Program to convert Cartesian coordinates to Polar Coordinates

# include <stdio.h>
# include <math.h>

int main()
{
    float x,y,r;
    double fi;


    printf("Enter cartesian coordinates x,y of the point\n"); 
    scanf("%f %f", &x, &y);

    r  = sqrt (x * x + y * y);
    fi = atan2(y,x);



    printf("Polar coordinates of the entered point are (%f,%f)\n", r,fi );

    return 0;




}