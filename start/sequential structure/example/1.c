#include <stdio.h>
int main() {
    int n , x , y , sum;
    scanf("%d %d %d", &n, &x, &y);
    sum = n -(y/x);
    if ((y/x)==0) 
        printf("%d", sum-1);//逆天吃完还要少一个
    else
        printf("%d", sum-1);
    return 0;
}