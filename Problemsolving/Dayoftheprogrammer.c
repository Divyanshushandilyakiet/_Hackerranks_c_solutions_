/*Day of the Programmer*/
#include <stdio.h>

int main(){
    int y; 
    scanf("%d",&y);
    if(y<1918){
        if(y%4){
            printf("13.09.%4d\n",y);
        }
        else{
            printf("12.09.%4d\n",y);
        }
    }
    else if(y== 1918){
        printf("26.09.1918\n");
    }
    else{
        if((y%400 == 0) || (y%4 == 0 && y%100)){
            printf("12.09.%4d\n",y);
        }
        else{
            printf("13.09.%4d\n",y);
        }
    }
    return 0;
}
