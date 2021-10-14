// For Loop in C - Hacker Rank Solution
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
   // Complete the code.
   // For Loop in C - Hacker Rank Solution START
   
    char *str[] = {"one", "two", "three", "four", "five", "six", "seven",  "eight",  "nine", "even", "odd"};

    scanf("%d\n%d", &a, &b);
    for (int i=a; i<=b; i++)// i= 8 
    {
            if (i <= 9) 
        {
                printf ("%s\n", str[i-1]);
        }
            else
        {
                printf ("%s\n", str[9+(i%2)]);
        }
        
    // For Loop in C - Hacker Rank Solution END
    
    }
    return 0;
}
