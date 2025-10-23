#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int digit = n % 10;
    printf("%d\n", digit);
    return 0;
}