#include <stdio.h>
#include <stdlib.h>
int sumar (int , int);
int restar (int,int);
float dividir (int,int);
int multiplicar (int, int);
int factorialA (int);
int factorialB (int);
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
    int factorialUno;
    int factorialDos;

    do
    {
        printf("Elija una opcion:\n");
        printf("1.Ingresar 1er operando: (A=%d)\n",numeroUno);
        printf("2.Ingresar 2do operando: (B=%d)\n",numeroDos);
        printf("3.Calcular todas las operaciones\n");
        printf("   a)Calcular la suma\n   b)Calcular la resta\n   c)Calcular la division\n   d)Calcular la multiplicacion\n   e)Calcular el factorial\n");
        printf("4.Informar resultados\n");
        printf("5.Salir\n");

        scanf("%d", & opcion);
        /*printf("Elija una opcion:\n");
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Dividir\n");
        printf("4.Multiplicar\n");
        printf("5.Factorial\n");
        printf("6.Salir\n");

        scanf("%d", & opcion);*/

        switch (opcion)
        {
        case 1:
            numeroUno = pedirEntero("Ingrese el primer operador: \n");
            break;
        case 2:
            numeroDos = pedirEntero("Ingrese el segundo operador: \n");
            break;
        case 3:
            printf("Calculando operaciones...\n");
            suma = sumar(numeroUno,numeroDos);
            resta = restar(numeroUno,numeroDos);
            division = dividir(numeroUno,numeroDos);
            multiplicacion = multiplicar(numeroUno,numeroDos);
            factorialUno = factorialA(numeroUno);
            factorialDos = factorialB(numeroDos);
            break;
        case 4:
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
            printf("El factorial de %d es %d y el factorial de %d es %d\n",numeroUno,factorialUno,numeroDos,factorialDos);
            break;
        case 5:
            break;
        default:
            printf("Ingrese una opcion correcta.\n");
            break;

        }
        /*switch (opcion)
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

            if (numeroDos == 0)
            {
                printf("No se puede dividir por 0\n");
            }
            else
            {
                division= dividir(numeroUno, numeroDos);

                printf("La division es: %.2f\n",division);
            }

            break;
        case 4:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            printf("Ingrese otro numero: \n");
            scanf("%d", & numeroDos);
            printf("Estoy multiplicando %d * %d\n", numeroUno,numeroDos);

            int multiplicacion;

            multiplicacion = multiplicar (numeroUno,numeroDos);

            printf("La Multiplicacion es: %2d\n",multiplicacion);
            break;
        case 5:
            printf("Ingrese un numero: \n");
            scanf("%d", & numeroUno);

            int elFactorial;
            elFactorial = factorial(numeroUno);

            printf("El factorial de %d es %d\n", numeroUno,elFactorial);
            break;
        case 6:
            break;
        default:
            printf("Ingrese una opcion correcta.\n");
            break;
        }*/

        system("pause");
        system("cls");

    }
    while (opcion != 5);

    return 0;
}

int sumar(int numeroUno, int numeroDos)     //FUNSION SUMA
{
    int suma;

    suma = numeroUno + numeroDos;

    return suma;
}

int restar (int numeroUno, int numeroDos)   //FUNSION RESTA
{
    int resta;

    resta = numeroUno - numeroDos;

    return resta;
}

float dividir(int numeroUno, int numeroDos)     //FUNSION DIVISION
{
    float division;

    division = (float)numeroUno / (float)numeroDos;

    return division;
}

int multiplicar (int numeroUno, int numeroDos)  //FUNSION MULTIPLICAR
{
    int multiplicacion;

    multiplicacion = numeroUno * numeroDos;

    return multiplicacion;
}

int factorialA (int numeroUno)    //FUNSION FACTORIAL
{
    int factorial=1;
    int i;
    int numero=numeroUno;

      for(i=1;i<=numero;i++)
      factorial=factorial*i;

      return factorial;
}

int factorialB (int numeroDos)    //FUNSION FACTORIAL
{
    int factorial=1;
    int i;
    int numero=numeroDos;

      for(i=1;i<=numero;i++)
      factorial=factorial*i;

      return factorial;
}

int pedirEntero (char texto[])
{
    int numero;

    printf("%s", texto);  //mascara para mostrar cadena de char, streen
    scanf("%d", &numero);

    return numero;
}
