//Climbing the Leaderboard
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *scores = malloc(sizeof(int) * n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       scanf("%d",&scores[scores_i]);
        if(scores_i){
            if(scores[scores_i]==scores[scores_i-1]){
                scores_i--;
                n--;
            }
        }
    }
    //printf("%d\n",n);//
    int m; 
    scanf("%d",&m);
    int *alice = malloc(sizeof(int) * m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       scanf("%d",&alice[alice_i]);
    }
    int rank=n;
    for(int j=0; j<m; j++){
        while(alice[j]>=scores[rank-1] && rank>0){
            rank--;
            if(rank==0) break;
        }
        printf("%d\n",rank+1);
    }
    
    
    // your code goes here
    return 0;
}
