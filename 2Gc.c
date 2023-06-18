//Program to print distance between two places in nautical miles.
# include <stdio.h>
# include <math.h>

int main()
{
    double L1, L2, G1, G2;
    double D;

    printf("Enter values of Latitude of place 1 and 2 in degrees\n");
    scanf("%lf %lf", &L1, &L2);

    printf("Enter values of Longitude of place 1 and 2 in degrees\n");
    scanf("%lf %lf", &G1, &G2);

    // Convert degrees to radians sine trigniometric functions take only radians as their argument.

   double L1_ = 3.14/180  * L1;
   double L2_ = 3.14/180  * L2;
   double G1_ = 3.14/180  * G1;
   double G2_ = 3.14/180  * G2;


    D = 3963.0 * acos(sin(L1_) * sin(L2_) + cos(L1_) * cos(L2_) * cos(G2_ - G1_));

    printf("Distance between the two places is %lf nautical miles\n", D);

    return 0;



}