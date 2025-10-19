#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int a;
    bool b;
    int c;
    scanf("%d",&a);
    b = (bool)a;
    c = (int)b;
    printf("%d",c);
    return 0;
}