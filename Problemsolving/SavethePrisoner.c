#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,m,s,i,p;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
        {
        scanf("%d%d%d",&n,&m,&s);
        p=(s+m-1)%n;
        if(p==0)
            p=n;
        printf("%d\n",p);
    }
    return 0;
}
     
