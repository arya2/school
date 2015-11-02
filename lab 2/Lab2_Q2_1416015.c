//Arya Solhi
//L07
//1416015
//Lab 2
//solhia
//Question 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 4

int is_diag_dom(int mat[][N]){
    int diag = 1;
    for (int i = 0; i<N; i++){
        int total = 0;
        for (int j = 0; j<N; j++){
            if (i!=j){
                total += fabs(mat[i][j]);
            }
        }
        if(fabs(mat[i][i])<total){
            diag = 0;
        }
    }
    return diag;
}


int is_toeplitz(int a[][N], int m){
    int ret = 1;
    int runs = (m+N-1);
    int half = runs/2;
    int numitems = 1;
    for (int i = 0; i < runs; i++){
        int y = (i > half)?i:0;
        int x = (i < half)?x:half;
        int ref = a[m-1-x][y];
        for(int j = 0; j<numitems; j++){
            if (a[m-1-x+j][y+j] != ref){
                ret = 0;
            }
        }
        if(i<half){
            numitems++;
        }else{
            numitems--;
        }
    }
    return ret;
}

int print_diag(int a[][N]){
    int runs = N*2 - 1;
    int numitems = 1;
    for(int i = 0; i<runs; i++){
        int srt = (i<runs/2)?i:runs/2;
        int srt2 = (i>runs/2)?i-runs/2:0;
        for(int j = 0; j<numitems; j++){
            printf("%d, ", a[srt-j][j+srt2]);
        }
        if(i<(runs/2)){
            numitems++;
        }else{
            numitems--;
        }
    }
}

int main(){
    int mat[][N] = {
        {6, 2, 1, 0},
        {0, 6, 2, 1},
        {1, 0, 6, 2},
        {2, 1, 0, 6}
    };
    printf("\n\n\n%d\n", is_diag_dom(mat));
    printf("%d, ", is_toeplitz(mat, N));
    print_diag(mat);
}





