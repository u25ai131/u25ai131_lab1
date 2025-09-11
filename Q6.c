#include<stdio.h>

int main(){
    char c = 'c';
    char d  = 'd';
    printf("Initial Values of c and d are %c, %c\n", c, d);
    c = c + d;
    d = c - d;
    c = c - d;
    printf("Swapped Values of c and d are %c, %c", c, d);
    return 0;
}
