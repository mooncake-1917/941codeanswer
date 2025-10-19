#include <stdio.h>
#include <math.h>
int main() 
{
    double a, b, c, d, x , y,z;
    double pow(double x, double y);
    scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
    z = a * pow(x, 3) + b * pow(x, 2) + c * x + d;
    printf("%.7f\n", z);  
    return 0;
}
