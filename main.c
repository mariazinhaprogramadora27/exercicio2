#include <stdio.h>

int main() {
    int numero;


    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);


    int primo = 1;


    if (numero <= 1) {
        primo = 0;
    } else if (numero == 2) {
        primo = 1;
    } else if (numero % 2 == 0) {
        primo = 0;
    } else {

        int i = 3;
        int raizQuadrada = 1;
        while (raizQuadrada * raizQuadrada <= numero) {
            raizQuadrada++;
        }
        while (i <= raizQuadrada) {
            if (numero % i == 0) {
                primo = 0;
                i = raizQuadrada + 1;
            }
            i += 2;
        }
    }


    if (primo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
        printf("Divisores de %d são: ", numero);

        int i = 1;
        while (i <= numero) {
            if (numero % i == 0) {
                printf("%d ", i);
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}
