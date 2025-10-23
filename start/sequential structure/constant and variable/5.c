#include <stdio.h>
#include <ctype.h>

int main(void) {
    double value , c;
    scanf("%lf", &value);

    c = (value - 32.0) * 5.0 / 9.0;
    printf("%.5f", c);
   
    return 0;
}