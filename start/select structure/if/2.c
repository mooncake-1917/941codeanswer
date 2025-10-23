#include <stdio.h>
#include <math.h>
int main() {
    int n, a, b, c, d;
    scanf("%d", &n);
    a = n % 10;
    b = (n / 10) % 10;
    c = n / 100;
    d = pow(a,3)+pow(b,3)+pow(c,3);
    if (d == n) {
        printf("TRUE");
    } else {
        printf("FALSE");
    }
    return 0;
}