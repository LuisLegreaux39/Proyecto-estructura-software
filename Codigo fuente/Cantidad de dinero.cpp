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
#include <cstdlib>

void cambio(int cantidad){
    int billetes[] = {2000, 1000, 500, 200, 100, 50}; //Se crea un array para los valores de los billetes en pesos
    int monedas[] = {25, 10, 5, 1}; //Se crea un array para los valores de las monedas en pesos

    printf("\nPara el valor %d el minimo cambio seria: \n", cantidad);

    for (int i=0; i<6; i++) { // Se establece un bucle for para evaluar cada valor del array billetes
        int cant_billetes = cantidad / billetes[i]; //Se divide la cantidad de dinero entre un valor del array billetes para encontrar la cantidad
        cantidad %= billetes[i]; //Se obtiene el resto de la cantidad con el valor de billetes para actualizar su valor
        if (cant_billetes > 0) { //Si la cantidad de billetes es mayor que 0 se ejecutara la condicion
            printf("%d billete(s) de %d pesos\n", cant_billetes, billetes[i]); //Se imprime la cantidad de billetes de x valor y se establece el valor del billete
        }
    }

    for (int i=0; i<4; i++) { // Se establece un bucle for para evaluar cada valor del array monedas
        int cant_monedas = cantidad / monedas[i]; //Se divide la cantidad de dinero actualizada entre un valor del array monedas para encontrar la cantidad
        cantidad %= monedas[i]; //Se obtiene el resto de la cantidad con el valor de monedas para actualizar su valor
        if (cant_monedas > 0) { //Si la cantidad de monedas es mayor que 0 se ejecutara la condicion
            printf("%d moneda(s) de %d pesos\n", cant_monedas, monedas[i]); //Se imprime la cantidad de monedas de x valor y se establece el valor de la moneda
        }
    }
}

int main() {
    int cantidad; //Se establece la variable cantidad para el dinero 

    printf("¿Cuanto dinero tienes? "); //Se imprime la pregunta para ingresar la cantidad
    int valor = scanf("%i", &cantidad); //Se establece  el tipo de valor y se llama a la variable de la cantidad de dinero

    while(valor == 0 || cantidad < 0){ //Se establece un bucle que se ejecutara cuando lo que se ingrese no sea un numero o sea negativo
        while(getchar() != '\n'); //Limpia o descarta lo ingresado a la variable

        printf("El valor ingresado es invalido, vuelve a intentar. \n"); //Se imprime la indicacion 
        printf("¿Cuanto dinero tienes? "); //Se vuelve a preguntar para ingresar el valor
        valor = scanf("%i", &cantidad); //Se vuele a registrar el valor ingresado
    }

    cambio(cantidad); //Se llama a la funcion cambio para que se ejecute con el valor de la variable cantidad
     system("pause");

    return 0;
    
}