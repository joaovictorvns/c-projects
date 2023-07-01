#include <stdio.h>

int main() {
    int a;
    printf("Digite o primeiro n%cmero: ", 163);
    scanf("%i", &a);

    int b;
    printf("Digite o segundo n%cmero: ", 163);
    scanf("%i", &b);

    printf("%i+%i=%i\n", a, b, a+b);
    return 0;
}