//Arya Solhi
//L07
//001416015
//Lab 3
//solhia
//Question 2

#include <stdio.h>
#include <stdlib.h>

int *sort(const int a[], int n, int *ptr){
    int *p = (int*)calloc(n, sizeof(int));
    for(int i = 0; i<n; i++){
        p[i] = a[i];
    }
    
    int temp;
    int sorted = 0;
    int pivot = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(p[i] > p[j]){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    return p;
}

int main(){
    int var;
    int a[50];
    for (int i = 0; i<50; i++){
        a[i] = rand();
        printf("%d, ", a[i]);
    }
    int p = *sort(a, 50, &var);
}