#include <stdio.h>

#define MAX 15 

int main(){
    char buf[MAX];
    fgets(buf, MAX, stdin);
    printf("The string is |%s|\n", buf);

    return 0;
}