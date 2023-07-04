#include <stdio.h>
#include <string.h>

int intlen(int n_int) {
    char n_str[6];
    sprintf(n_str, "%i", n_int);
    return strlen(n_str);
}

int main() {
    int n = 123;
    printf("length(%lu) = %i\n",n , intlen(n));
    return 0;
}