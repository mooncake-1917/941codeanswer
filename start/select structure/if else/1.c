#include <stdio.h>
int main() {
    int a;
    scanf ("%d", &a);
    if (a ==0) {
        printf ("zero\n");
    } else {
        if (a > 0) {
            printf ("positive\n");
        } else {
            printf ("negative\n");
        }
    }
    return 0;
}