//Electronics Shop
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int n; 
    int m,i,j,k,l; 
    scanf("%d %d %d",&s,&n,&m);
    int *keyboards = malloc(sizeof(int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%d",&keyboards[keyboards_i]);
    }
    int *pendrives = malloc(sizeof(int) * m);
    for(int pendrives_i = 0; pendrives_i < m; pendrives_i++){
       scanf("%d",&pendrives[pendrives_i]);
    }
    k=-1;
    for(i=0;i<n;i++)
        {
        if(keyboards[i]>=s)
            {
            continue;
        }
        for(j=0;j<m;j++)
            {
            if(keyboards[i]+pendrives[j]<=s&&keyboards[i]+pendrives[j]>k)
                {
                k=keyboards[i]+pendrives[j];
            }
        }
    }
    printf("%d",k);
    return 0;
}
