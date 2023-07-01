#include <stdio.h>
#include <string.h>

int intlen(int n_int) {
    char n_str[6]; // int: -32,767 to 32,767
    sprintf(n_str, "%i", n_int);
    return strlen(n_str);
}

int main() {
    int iMax = 10, jMax = 10;
    for (int i = 0; i < iMax; i++) {
        for (int j = 0; j < jMax; j++) {
            printf("%*i", intlen(iMax*jMax)+1, i*jMax+j+1);
        }
        printf("\n");
    }
    return 0;
}