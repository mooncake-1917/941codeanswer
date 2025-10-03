#include <stdio.h>
int main()
{
    long long int x,y,a,b;
    double v;
    long long int r1,r2;
    scanf("%lld %lld %lld %lld",&x,&a,&y,&b);
    r1 = x*a;
    r2 = y*b;
    v =  (r1-r2)/(a-b);
    //printf("%lld %lld\n",r1,r2);
    printf("%.2lf",v);
    return 0;
}