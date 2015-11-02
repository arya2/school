//Arya Solhi
//L07
//001416015
//Lab 3
//solhia
//Question 1

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void process(double p[], int n, double *avPtr, double *difPtr){
    double most = LONG_MIN, least = LONG_MAX;
    for(int i = 0; i<n; i++){
        *avPtr += p[i];
        most = (most < p[i])?p[i]:most;        
        least = (least > p[i])?p[i]:least;
    }
    *avPtr = *avPtr / n;
    *difPtr = most - least;
}

int main(){
    int n = 0;
    double avPtr = 0, difPtr = 0;
    scanf("%d", &n);
    double *p = (double*)calloc(n, sizeof(double));
    for(int i = 0; i<n; i++){
        scanf("%lf", &p[i]);
    }
    process(p, n, &avPtr, &difPtr);
    printf("avPtr: %f, difPtr: %f", avPtr, difPtr);
}