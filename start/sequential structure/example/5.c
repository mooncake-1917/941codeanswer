#include <stdio.h>

int main() 
{
    double high, low, sum, avg;
    sum=6*9.6;
    high=sum-5*9.4;
    low=sum-5*9.8;
    avg=sum-(high+low);
    printf("%5.2f", avg/4);
    return 0;
}