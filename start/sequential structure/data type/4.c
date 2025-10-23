#include <stdio.h>
#include <stdbool.h>

int main(void) {
    _Bool a = true;
    char b;
    printf("%zu %zu", sizeof(a), sizeof(b));
    return 0;
}