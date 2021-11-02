//The Hurdle Race
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    int max=-1,ans=0;
    scanf("%d %d",&n,&k);
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
        if(height[height_i]>max)
            max=height[height_i];
    }
    if(max>k)
        ans=max-k;
    printf("%d",ans);
    // your code goes here
    return 0;
}
