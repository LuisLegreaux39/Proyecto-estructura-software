/*
 * Participantes:
 * - Hector Junior Morales Veloz - A00114842
 * - Luis Ricardo Legreaux Medina - A00114843
 * - Joshua Alberto Martinez Fernandez - A00115333
 * - Steven Paulino Garcia - A00115455
 * - John De La Cruz - A00114885
 * - Anny Josefina Perez Perez - A00113391
 * - ...
 */

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

void alloc(int numero, int **lista) { //alloc aloja memoria para un array y se le asignan las variables para poder acceder a sus valores
  *lista = (int *)malloc(numero * sizeof(int)); //Aloja memoria para el syze del array en bytes multiplicando el numero por el syze
}

int main() {
    int numero, *lista, mayor, menor; //Se crean las variables 

    printf("¿Cuantos numeros estaran en la serie? "); //Se pregunta la cantidad de numeros que iran a la lista
    scanf("%d", &numero);

    alloc(numero, &lista); //Se aloja la memoria para almacenar el syze de la lista y los numeros en la memoria

    for (int i=0; i < numero; i++){ //Se usa un bucle para escribir los numeros de la lista
        printf("Escribe el numero %d: ", i+1); //Se piden los numeros y se cuatificara cada peticion
        scanf("%d", &lista[i]); //Se guarda lo que se ingrese en la variable lista
    }

    mayor = menor = lista[0]; //Se define que el valor de mayor a menor sera el primero en la lista

    for (int i=0; i < numero; i++){ //Se crea un bucle para revisar cada numero en la lista
        if (lista[i] > mayor){ //Se crea la condicion que revise si el numero x de la lista es mayor a la misma variable mayor
            mayor = lista[i]; //Si se cumple la condicion el valor de mayor se tomara y no cambiara hasta que un numero mayor de la lista aparezca
        }
        else if (lista[i] < menor){ //Se crea la condicion que revise si el numero x de la lista es menor a la misma variable menor
            menor = lista[i]; //Si se cumple la condicion el valor de menor se tomara y no cambiara hasta que un numero menor de la lista aparezca
        }
    }

    int aleatorio = rand() % numero; //Se establece una variable para hacer que los valores se muestren en orden aleatorio

    printf ("\nEsta es la serie de numeros enteros: \n");
    for (int i=0; i < numero; i++){ //Se hace una variable que revise cada valor en la lista y los imprima
        printf("%d ", lista[(aleatorio + i) % numero]); //Se imprime estableciendo la variable aleatorio como un indice para acceder a los valores de la lista
    }

    printf("\nEl numero mayor es: %d", mayor); //Se imprime el numero de mayor valor
    printf("\nEl numero menor es: %d", menor); //Se imprime el numero de menor valor

    free(lista); //Se libera la memoria del array
     system("pause");
    return 0;
}
