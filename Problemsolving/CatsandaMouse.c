//Cats and a Mouse
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        int x; 
        int y; 
        int z; 
        scanf("%d %d %d",&x,&y,&z);
        int a = abs(x - z);
        int b = abs(y - z);
        if (a < b) printf("Cat A\n");
        else if (b < a) printf("Cat B\n");
        else printf("Mouse C\n");
    }
    return 0;
}
