#include <stdio.h>

int main() {
    int values[] = {100, 50, 20, 10, 5, 2};    
    int n;
    
    printf("Digite o valor: ", n);
    
    scanf("%i", &n);
    
    for (int i = 0; i < 6; i++) {
        printf("%i nota(s) de R$ %i,00\n", n/values[i], values[i]);
        n %= values[i];
    }
    printf("%i nota(s) de R$ 1,00\n", n);
    return 0;
}