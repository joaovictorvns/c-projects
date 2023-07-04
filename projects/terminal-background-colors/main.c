#include <stdio.h>

#define BUFFER_SIZE 1024*4

int main() {
    char buffer[BUFFER_SIZE];
    int index = 0;

    int n;
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            n = i*16+j;
            index += snprintf(buffer + index, BUFFER_SIZE - index, "\033[48;5;%im %-4i", n, n);
        }
        index += snprintf(buffer + index, BUFFER_SIZE - index, "\033[0m\n");
    }
    fwrite(buffer, sizeof(char), index, stdout);
    return 0;
}