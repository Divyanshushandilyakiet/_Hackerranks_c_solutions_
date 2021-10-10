//Function in c

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
       if(a>b && a>c && a>d)
    printf("%d",a);
    else if(b>c && b>d)
    printf("%d",b);
    else if(c>d)
    printf("%d",c);
    else 
    printf("%d",d);
    
    return 0;
}
