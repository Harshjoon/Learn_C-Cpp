#include <stdio.h>

#define MAX 15 

int main(){
    char buf[MAX];
    char* line = fgets(buf, MAX, stdin);
    printf("The string is |%s|\n", buf);

    if (!line){
        printf("empty buffer");
    }

    return 0;
}