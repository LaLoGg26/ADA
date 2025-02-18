#include <stdio.h>
#include <stdlib.h>


void numeroPalindromo(int numero){
    int original = numero;
    int invertido = 0;
    int digito;


    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    if (original == invertido) {
        printf("El número es un palíndromo.\n");
    } else {
        printf("El número no es un palíndromo.\n");
    }
}


int main(){
    int num;
    printf("Escribe un numero\n");

    scanf("%i", &num);

    numeroPalindromo(num);

    return 0;  
}
