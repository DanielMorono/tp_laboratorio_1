#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
/** \brief Suma dos numeros enteros
 *
 * \param int primer operador de la suma
 * \param int segundo operador de la suma
 * \return int resultado de la suma de dos enteros
 *
 */
int sumar(int numeroUno, int numeroDos)
{
    int suma;

    suma = numeroUno + numeroDos;

    return suma;
}


/** \brief Resta dos numeros enteros
 *
 * \param int primero operador de la resta
 * \param int segundo operador de la resta
 * \return int resultado de la resta entre dos numeros enteros
 *
 */
int restar (int numeroUno, int numeroDos)
{
    int resta;

    resta = numeroUno - numeroDos;

    return resta;
}


/** \brief Divide dos numeros enteros
 *
 * \param int Dividendo
 * \param int Divisor
 * \return float cociente de la division entre dos enteros
 *
 */
float dividir(int numeroUno, int numeroDos)
{
    float division;

    division = (float)numeroUno / (float)numeroDos;

    return division;
}


/** \brief Multiplica dos enteros
 *
 * \param int primer operador de la multiplicacion
 * \param int segundo operador de la multiplicacion
 * \return resultado de la multiplicacion entre dos enteros
 *
 */
int multiplicar (int numeroUno, int numeroDos)
{
    int multiplicacion;

    multiplicacion = numeroUno * numeroDos;

    return multiplicacion;
}



/** \brief muestra el factorial de un natural
 *
 * \param int Numero Natural del cual se quiere sacar el factorial
 * \return int factorial del numero entero ingresado
 *
 */
long int factorialA (int numeroUno)
{
    int factorial=1;
    int i;
    int numero=numeroUno;

      for(i=1;i<=numero;i++)
      factorial=factorial*i;

      return factorial;
}




/** \brief muestra el factorial de un natural
 *
 * \param int Numero Natural del cual se quiere sacar el factorial
 * \return int factorial del numero entero ingresado
 *
 */
long int factorialB (int numeroDos)
{
    int factorial=1;
    int i;
    int numero=numeroDos;

      for(i=1;i<=numero;i++)
      factorial=factorial*i;

      return factorial;
}



/** \brief Pide un numero entero
 *
 * \param char [] Texto que le pida al usuario que ingrese un numero
 * \return int numero entero que ingresa el usuario
 *
 */

int pedirEntero (char texto[])
{
    float numero;

    printf("%s", texto);
    scanf("%f", &numero);

    return numero;
}

