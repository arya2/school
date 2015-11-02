//Arya Solhi
//L07
//001416015
//Lab 3
//solhia
//Question 3

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int largest_prefix(const char *str, const char **list, int n){

    int matching;
    int j = 0;
    for (;j<n;j++){
        matching = 0;
        int i = 0;
        while (str[i] != '\0' && i<strlen(list[j])){
            if(str[i] == list[j][i]){
                matching = j;
            }else{
                matching = 0;
            }
            i++;
            if( str[i] == '\0' && i < strlen(list[j]) ){
                matching = 0;
            }
        }   
    }
    return matching+1;

}

int main(){
    const char *a[2];
    a[0] = "hel";
    a[1] = "as";
    printf("\n\n\n\n\n it matches :D ? :  lol : %d", largest_prefix("Hello world", a, 2));
}