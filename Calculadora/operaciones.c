#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int sumar(int numeroUno, int numeroDos)
{
    int suma;

    suma = numeroUno + numeroDos;

    return suma;
}

int restar (int numeroUno, int numeroDos)
{
    int resta;

    resta = numeroUno - numeroDos;

    return resta;
}

float dividir(int numeroUno, int numeroDos)
{
    float division;

    division = (float)numeroUno / (float)numeroDos;

    return division;
}

int multiplicar (int numeroUno, int numeroDos)
{
    int multiplicacion;

    multiplicacion = numeroUno * numeroDos;

    return multiplicacion;
}

int factorialA (int numeroUno)
{
    int factorial=1;
    int i;
    int numero=numeroUno;

      for(i=1;i<=numero;i++)
      factorial=factorial*i;

      return factorial;
}

int factorialB (int numeroDos)
{
    int factorial=1;
    int i;
    int numero=numeroDos;

      for(i=1;i<=numero;i++)
      factorial=factorial*i;

      return factorial;
}
