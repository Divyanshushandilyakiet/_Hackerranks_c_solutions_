//Sales by Match
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i,t;
    scanf("%d",&n);
    int c[101];
    memset(c,0,sizeof(c));
    for(i=0;i<n;i++)
        {
        scanf("%d",&t);
        c[t]++;
    }
    long int ans=0;
    for(i=1;i<=100;i++)
        {
       ans+=(c[i]/2);
    }
    printf("%ld",ans);
    return 0;
}
