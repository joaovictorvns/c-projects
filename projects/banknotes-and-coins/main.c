#include <stdio.h>
#include <ctype.h>

int n;

void calcDisplay(char form[], int lenForm, int values[], int lenValues) {
    char formUpperCase[lenForm];
    for (int i = 0; i < lenForm; i++) {
        formUpperCase[i] = toupper(form[i]);
    }
    formUpperCase[lenForm] = '\0';

    printf("%sS:\n", formUpperCase);
    for (int i = 0; i < lenValues; i++) {
        printf("%i %s(s) de R$ %.2f\n", n/values[i], form, values[i]/100.0);
        n %= values[i];
    }
}

int main() {
    double nAux;

     printf("Digite o valor: ", n);
    
    scanf("%lf", &nAux);
    n = nAux*100;
    int values1[] = {10000, 5000, 2000, 1000, 500, 200};
    int values2[] = {100, 50, 25, 10, 5, 1};
    
    calcDisplay("nota", 4, values1, 6);
    calcDisplay("moeda", 5, values2, 6);
    return 0;
}