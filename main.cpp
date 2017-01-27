#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b)
    return a;
    else{
        return b;
    }
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a>b)
    return b;
    else{
        return a;
    }

}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b&&a>c){
        return a;
    }else
    {
        if(b>c)
        {

            return b;
        }
        else{
            return c;
        }
    }
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{

 arreglo[posicion]=valor;


}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    if (arreglo[2]>arreglo[1])
    return arreglo[2];
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)

{

   int menor = 100;//inicializa el numero menor
    for(int b=0;b<tamano;b++)//se evalua el numero menor varias veces
    {
    if(arreglo[b]<menor)//evalua en un if el resultado
    menor=arreglo[b];//devuelve el resultado y lo evalua en la pocicion
    }
    return menor;//retorna el numero menor


}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{

int promedio = 0 ;//inicializa el valor de promedio desde 0
for(int a=0; a<tamano; a++)//se le asigna un valor de 0 a la letra a para que sea en la condicion la que recorra el arreglo
{
promedio = promedio+arreglo[a];//evalua la condicion de promedio y se le suma el recorrido del arreglo que se evalua en [a]
}
promedio = promedio/tamano;//evalua la condicion de promedio viendo que el recorrido sea menor que tamano para poder realizar la operacion
 return promedio;//retorna el valor de las operaciones anteriores para obtener el promedio

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
