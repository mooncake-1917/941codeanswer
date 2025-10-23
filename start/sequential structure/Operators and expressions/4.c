#include <stdio.h>
int main()
{
    int n,n1;
    int a, b, c;
    scanf("%d", &n);
    if(n<=99)n=100;
    if(n>=1000)n=999;
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    printf("%d%d%d",a,b,c);
    return 0;
}