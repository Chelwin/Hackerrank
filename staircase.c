#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,m, h ;
    scanf("%d",&n);

    for(i = 0; i<n; i++)
    {   m = n -1;
        for(j = 0; j<n; j++)
        {
            h = m - i;
            if(j<h){
                printf(" ");
                h--;
            }
            else if(j==h || j>h){
                printf("#");
            }

        }
        printf("\n");


    }
    return 0;
}
