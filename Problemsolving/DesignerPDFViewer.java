//Designer PDF Viewer
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n=26;
    int *h = malloc(sizeof(int) * n);
    for(int h_i = 0; h_i < n; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    int l=strlen(word);
    int i;
    int max=0;
    for(i=0;i<l;i++)
        {
        if(h[(int)word[i]-'a']>max)
            max=h[(int)word[i]-'a'];
    }
    printf("%d",max*l);
    return 0;
}
