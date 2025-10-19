#include <stdio.h>

int main() 
{
    int x,y;
    scanf("%d %d", &x, &y);
    if (x<1) x=1;
    if (y>50000) y=50000;
    printf("%d", x*y);
    return 0;
}
// anser 9 error: