#include <stdio.h>
int main()
{
    int n,p;
    int i;
    for(i=0;i<10;i++)
    {
        if (scanf("%d", &n) != 1) {
            printf("Input error!\n");
            return 1;
        }
        p=10*n;
        printf("%d %d\n",n,p);
    }
    return 0;
}