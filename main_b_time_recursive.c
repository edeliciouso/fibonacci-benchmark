#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(){

    int n = 30;
    int c;
    int i = 0;
    clock_t t;
    t = clock();

    for (c = 2; c <= n; c++)
    {
        printf("%d\n", fibonacciRecursive(i));
        i++;
    }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken: %f s", time_taken);
    return 0;
}