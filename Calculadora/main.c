#include <stdio.h>
#include <stdlib.h>

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
            break;
        case 2:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            printf("Ingrese otro numero: \n");
            scanf("%d", & numeroDos);
            printf("Estoy restando %d - %d\n", numeroUno,numeroDos);
            break;
        case 3:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            printf("Ingrese otro numero: \n");
            scanf("%d", & numeroDos);
            printf("Estoy dividiendo %d / %d\n", numeroUno,numeroDos);
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
