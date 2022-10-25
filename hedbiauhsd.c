//Fernando Adrian Palacios Ascencio 00001722
//Reconocer si es un numero par o impar lab 4
//Pedir al usuario un dato y que lo identifique
//Usar funciones en este ejercicio

#include <stdio.h>

void imprimirNumero(int numero){
    printf("El numero es %d", numero);
    
}

int main(int argc, char const *argv[])
{
    int numero=10;

    imprimirNumero(numero);

    if (numero % 2 == 0) {
    printf("\nEs par");
  } else {
    printf("\nEs impar");
  }

    return 0;
}