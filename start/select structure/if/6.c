#include <stdio.h>
int main() {
    char c;
    int a;
    scanf("%c", &c);
    a = (int)c;
    if(a%2==0) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}