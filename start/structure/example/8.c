#include <stdio.h>

int main(void) {
    float x;
    if (scanf("%f", &x) != 1) return 0;
    printf("%.3f\n", x);
    return 0;
}