#include <stdio.h>
#include <string.h>

int main() {
    char input[500];

    printf("Digite algo: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }

    printf("Voc%c digitou: \"%s\"\n", 136, input);
    return 0;
}