//Arya Solhi
//L07
//001416015
//Lab 3
//solhia
//Question 3

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char *my_strcat( const char * const str1, const char * const str2){
    char *a = (char*)calloc(strlen(str1) + strlen(str2) + 1, sizeof(char));
    int i = 0;
    while(i<strlen(str1)){
        a[i]=str1[i];
        i++;
    }
    while(i<(strlen(str1)+strlen(str2))){
        a[i]=str2[i - strlen(str1)];
        i++;
    }
    a[i] = '\0';
    return a;
}

int main(){
    printf("%s", my_strcat("hello", ", world"));
}