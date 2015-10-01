#include <stdio.h>

int main(void){
    int num, sum = 0;
    printf("Please input an integer (1 to quit)\n");
    scanf("%d", &num);
    while(num!=1){
        sum+=num;    
        printf("Please input an integer (1 to quit)\n");
        scanf("%d", &num);
    }
    printf("%d\n", sum);
}