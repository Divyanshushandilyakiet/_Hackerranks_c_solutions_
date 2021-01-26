#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,c,x=0,y=0,z=-1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c);
        if(c>z)
        {z=c;
        x=1;}
        else if(c==z)
        x=x+1;
        else 
        y=y+0;
    }
        printf("%d",x);
        return 0;
}
