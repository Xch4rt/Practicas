#include<iostream>
using namespace std;

int main()
{
    /*
        PUNTEROS
        * = declaracion de puntero
        & = direccion de memoria

        partes de una variable:
            nombre y tipo
            contenido
            dir de memoria
    */
    int var = 100;
    int *puntero = &var; //  le asigno a la variable puntero la direccion de memoria var

    cout<<"Valor de la variable: "<<var// Muestro al contenido de la variable
    <<"\nDireccion de memoria: "<<&var // Muestro la dir de la variable
    <<"\nDireccion de memoria en base 10: "<<(int)&var;
    return 0;
}