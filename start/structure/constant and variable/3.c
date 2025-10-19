#include <stdio.h>
int main() 
{
    int a, b;
    double c;
    scanf("%d %d", &a, &b);
    c = (double)b / a * 100;
    printf("%.3f%%\n", c);
    return 0; 
}

