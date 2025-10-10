#include <stdio.h>
int main()
{
    int a,b; 
    double c;
    scanf("%d %d", &a, &b);
    c= a - b*0.8;
    printf("%.2f",c);
    return 0;
}