#include <stdio.h>
#include <stdlib.h>
int sumar (int , int);
int restar (int,int);
float dividir (int,int);
int main()
{
    int opcion;
    int numeroUno;
    int numeroDos;
    do
    {
        printf("Elija una opcion:\n");
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Dividir\n");
        printf("4.Multiplicar\n");
        printf("5.Factorial\n");
        printf("6.Salir\n");

        scanf("%d", & opcion);


        switch (opcion)
        {
        case 1:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            printf("Ingrese otro numero: \n");
            scanf("%d", & numeroDos);
            printf("Estoy sumando %d + %d\n", numeroUno,numeroDos);
            int suma;
            suma = sumar(numeroUno,numeroDos);

            printf("La suma es: %d \n",suma);

            break;
        case 2:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            printf("Ingrese otro numero: \n");
            scanf("%d", & numeroDos);
            printf("Estoy restando %d - %d\n", numeroUno,numeroDos);

            int resta;

            resta = restar (numeroUno , numeroDos);

            printf("La resta es: %d \n",resta);
            break;
        case 3:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            printf("Ingrese otro numero: \n");
            scanf("%d", & numeroDos);
            printf("Estoy dividiendo %d / %d\n", numeroUno,numeroDos);
            float division;

            division= dividir(numeroUno, numeroDos);

            printf("La division es: %.2f\n",division);
            break;
        case 4:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            printf("Ingrese otro numero: \n");
            scanf("%d", & numeroDos);
            printf("Estoy multiplicando %d * %d\n", numeroUno,numeroDos);
            break;
        case 5:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            printf("Ingrese otro numero: \n");
            scanf("%d", & numeroDos);
            printf("Estoy factorizando %d y %d\n", numeroUno,numeroDos);
            break;
        case 6:
            break;
        default:
            printf("Ingrese una opcion correcta.\n");
            break;
        }

        system("pause");
        system("cls");

    }
    while (opcion != 6);

    return 0;
}

int sumar(int numeroUno, int numeroDos)              //FUNSION SUMA
{
    int suma;

    suma = numeroUno + numeroDos;

    return suma;
}

int restar (int numeroUno, int numeroDos)          //FUNSION RESTA
{
    int resta;

    resta = numeroUno - numeroDos;

    return resta;
}

float dividir(int numeroUno, int numeroDos)        //FUNSION DIVISION
{
    float division;

    division = (float)numeroUno / (float)numeroDos;

    return division;
}
