  
#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    float pos=0,neg=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        if (k<0)
        neg++;
       else if(k>0)
        pos++;
    }
    printf("%f\n%f\n%f",pos/n,neg/n,(n-pos-neg)/n);
    return 0;
}
