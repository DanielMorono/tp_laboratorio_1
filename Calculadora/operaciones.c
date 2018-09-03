#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

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
