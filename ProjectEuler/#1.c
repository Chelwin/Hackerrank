//throws compilation error: "cc: fatal error: no i/p files."
//because of the #?
#include <stdio.h>

main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long t = 0, n, x = 1, sum, y;
    scanf("%ld", &t);
    if(1 <= t <= 10^5){
        while( x <= t){
            scanf("%ld",&n);
            if(1 <= n <= 10^9){
                sum = 0;
                y = 1;
                while( y < n){
                    //add arimatic progression to get rid of this 
                    if(y%3 == 0 || y%5 ==0) sum = sum + y;
                    y++;
                }
                printf("%ld\n",sum);
            }
            x++;
        }
    }
}

