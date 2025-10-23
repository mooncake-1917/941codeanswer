#include <stdio.h>
#include <math.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if(n<0) n=0;
    int y = pow(2,(double)n);
    printf("%f", y);
    return 0;
}
//answer 1 error: