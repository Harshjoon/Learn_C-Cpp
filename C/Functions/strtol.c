#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[50] = " 12344321 This string contains a number";
    char *ptr;
    long ret; 

    ret = strtol( str, &ptr, 10);

    printf("The number unsigned long integer is %ld\n", ret);
    printf("The string part |%s|", ptr);


    return(0);
}
