//Forming a Magic Square
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n = 3;
    int a[3][3] = {4,9,2,3,5,7,8,1,6}; 
    int b[3][3];
    int cost = INT_MAX;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%i", &b[i][j]);
        }
    }
    for(int k=0; k<4; k++) {
        int diff1 = 0, diff2 = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                diff1 += abs(a[i][j]-b[i][j]);
                diff2 += abs(a[i][n-1-j]-b[i][j]);
            }
        }
        if(diff1<cost)
            cost = diff1;
        if(diff2<cost)
            cost = diff2;
        
        for(int i=0; i<n/2; i++) {
            for(int j=0; j<(n+1)/2; j++) {
                int temp = b[i][j];
                b[i][j] = b[n-1-j][i];
                b[n-1-j][i] = b[n-1-i][n-1-j];
                b[n-1-i][n-1-j] = b[j][n-1-i];
                b[j][n-1-i] = temp;
            }
        }
    }
    printf("%i", cost);
    return 0;
}
