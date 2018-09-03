#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int pedirEntero (char[]);
int main()
{
    int opcion;
    int numeroUno=0;
    int numeroDos=0;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    long int factorialUno;
    long int factorialDos;
    int respetarOrden=0;
    int respetarOrdenDos=0;
    int respetarOrdenTres=0;

    do
    {
        printf("Elija una opcion:\n");
        printf("1.Ingresar 1er operando: (A=%d)\n",numeroUno);
        printf("2.Ingresar 2do operando: (B=%d)\n",numeroDos);
        printf("3.Calcular todas las operaciones\n");
        printf("   a)Suma\n   b)Resta\n   c)Division\n   d)Multiplicacion\n   e)Factorial\n");
        printf("4.Informar resultados\n");
        printf("5.Salir\n");

        scanf("%d", & opcion);

        switch (opcion)
        {
        case 1:
            numeroUno = pedirEntero("Ingrese el primer operador: \n");
            respetarOrden=1;
            break;
        case 2:
            if (respetarOrden == 0)
            {
                printf("Debe ingresar el primer operador antes de realizar esta funcion\n");
            }
            else
            {
            numeroDos = pedirEntero("Ingrese el segundo operador: \n");
            respetarOrdenDos = 1;
            }
            break;
        case 3:
            if (respetarOrdenDos == 0)
            {
                printf("Debe ingresar los dos operadores antes de realizar esta funcion\n");
            }
            else
            {
            printf("Calculando operaciones...\n");
            suma = sumar(numeroUno,numeroDos);
            resta = restar(numeroUno,numeroDos);
            division = dividir(numeroUno,numeroDos);
            multiplicacion = multiplicar(numeroUno,numeroDos);
            factorialUno = factorialA(numeroUno);
            factorialDos = factorialB(numeroDos);
            respetarOrdenTres = 1;
            }
            break;
        case 4:
            if (respetarOrdenTres == 0)
            {
                printf("Debe ingresar los dos operadores y calcular las operaciones antes de realizar esta funcion\n");
            }
            else
            {
            printf("El resultado de %d+%d es: %d\n",numeroUno,numeroDos,suma);
            printf("El resultado de %d-%d es: %d\n",numeroUno,numeroDos,resta);

            if (numeroDos == 0)
            {
                printf("No se puede dividir por 0\n");
            }
            else
            {
                printf("El resultado de %d/%d es: %.2f\n",numeroUno,numeroDos,division);
            }

            printf("El resultado de %d*%d es: %d\n",numeroUno,numeroDos,multiplicacion);



            if (numeroUno < 0)
            {
                printf("%d no tiene factorial porque es negativo\n",numeroUno);
            }
            else
            {
                printf("El factorial de %d es %d\n", numeroUno,factorialUno);
            }

            if (numeroDos < 0)
            {
                printf("%d no tiene factorial porque es negativo\n",numeroDos);
            }
            else
            {
                printf("El factorial de %d es %d\n", numeroDos,factorialDos);
            }


            respetarOrdenTres = 1;
            }
            break;
        case 5:
            break;
        default:
            printf("Ingrese una opcion correcta.\n");
            break;

        }

        system("pause");
        system("cls");

    }
    while (opcion != 5);

    return 0;
}

int pedirEntero (char texto[])
{
    int numero;

    printf("%s", texto);  //mascara para mostrar cadena de char, streen
    scanf("%d", &numero);

    return numero;
}
