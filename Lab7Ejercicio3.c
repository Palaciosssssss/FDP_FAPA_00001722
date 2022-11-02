// Fernando Adrian Palacios Ascencio 00001722
// Ejercicio 3
// Escriba un programa que almacene cuantas letras "a" tiene una palabra en la primera linea,
// cuantas letras "e" en la segunda , cuantas letras i en la tercera, y asi sucesivamente para las demas vocales
//Declarando librerias
#include <stdio.h>
int main()
{
    //creando texto
    FILE *Letras = fopen("Letras_repetidas.txt", "w");
    //declarando variables
    int q = 0, w = 0, e = 0, r = 0, t = 0;
    //declarando el arreglo
    char array[8];
    //pidiendo datos del usuario
    printf("Ingrese_una_palabra_de_8_letras\n");
    fgets(array, sizeof(array), stdin);
    //for para crear el contador para todas las bocales
    for (int i = 0; i < 8; i++)
    {
        //contador para letra A
        if (array[i] == 'a')
        {
            q++;
        }
        //contador para letra E
        else if (array[i] == 'e')
        {
            w++;
        }
        //contador para letra I
        else if (array[i] == 'i')
        {
            e++;
        }
        //contador para letra O
        else if (array[i] == 'o')
        {
            r++;
        }
        //contador para letra U
        else if (array[i] == 'u')
        {
            t++;
        }
    }
    //mostrar al usuario en archivo txt
    fprintf(Letras,"El numero de A %d\n", q);
    fprintf(Letras,"El numero de E %d\n", w);
    fprintf(Letras,"El numero de I %d\n", e);
    fprintf(Letras,"El numero de O %d\n", r);
    fprintf(Letras,"El numero de U %d\n", t);
    //terminar el usuario
    fclose(Letras);

    return 0;
}
