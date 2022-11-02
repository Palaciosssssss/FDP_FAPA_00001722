#include <stdio.h>
int main(){
   //Crear archivos d etexto
    FILE *NP = fopen("Numeros_positivos.txt", "w");
    FILE *NN = fopen("Numeros_negativos.txt", "w");
    //ifs para la ccomparacion de datos
    if (NP == NULL){
        printf("No existe archivo");
        return 1;
    }
    if (NN== NULL){
        printf("ERROR!!!");
        return 1;
    }
//declarando int
     int cant=0;

            do{
                printf("Escriba un numero entero\n");
                if(cant > 0){
                    scanf("%d", &cant);
                    fprintf(NP, "%d",cant);
                    fprintf(NP,"\n");
                }
                else{
                    scanf("%d", &cant);
                    fprintf(NN, "%d",cant);
                    fprintf(NN,"\n");
                      }
                
            
            }
            while(cant = 0);

    
    //para cerrar el archivo como buena practica
    fclose(NP);
    fclose(NN);
    return 0;
}