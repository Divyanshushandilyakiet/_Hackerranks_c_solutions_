#include<stdio.h>
int main()
{
    long long max=0,tot=0,a[5],tot_min,tot_max;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long long min=a[0];
    for(int i=0;i<5;i++)
    {
        tot=tot+a[i];
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    tot_max=tot-min;
    tot_min=tot-max;
    printf("%lld %lld",tot_min,tot_max);
    return 0;
}
