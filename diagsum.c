/*
status: complete
*/
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

    int a[n][n], d1, d2, m, modsum, a_i,  a_j;

	d1 = d2 = 0;
	m =n-1;

    for(a_i = 0; a_i < n; a_i++){
       for(a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
    for(a_i = 0; a_i < n; a_i++){
	for(a_j = 0; a_j < n; a_j++){
		
			
			if(a_i == a_j) d1 = d1 + a[a_i][a_j];                   // (0,0), (1,1), (2,2)

			if((a_i + a_j) == m) d2 = d2 + a[a_i][a_j];            // (0,2), (1,1), (2,0)
				
			//temp_r += 1; temp_c += 1;
		}
	}
	
	modsum = abs(d1 - d2);
	
	printf("%d",modsum);
    
    
    return 0;
}

