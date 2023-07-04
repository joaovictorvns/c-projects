#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main() {
    char buffer[BUFFER_SIZE];
    int index = 0;

    // Escreve no buffer temporário
    index += snprintf(buffer + index, BUFFER_SIZE - index, "Primeiro texto armazenado no buffer de texto\n");
   
    // ... Outras instruções do programa ...
    sleep(10);

    // Escreve no buffer temporário novamente
    index += snprintf(buffer + index, BUFFER_SIZE - index, "Segundo texto armazenado no buffer de texto\n");
   
    // Exibe o conteúdo do buffer temporário
    fwrite(buffer, sizeof(char), index, stdout);
    return 0;
}