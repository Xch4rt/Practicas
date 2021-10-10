#include<iostream>
#include<fstream>
using namespace std;

void upperCase(char c[]);
void pasLines(char origen[], char destino[]);

int main()
{
    /*
        InputFile -> Flujo de entrada
        OutputFile -> Flujo de salida
    */

    pasLines("archivo.txt","archivo2.txt");
    return 0;
}

void upperCase(char c[])
{
    int i = 0;
    
    while(c[i])
    {
        c[i] = toupper(c[i]); i++;
    }
}
void pasLines(char origen[], char destino[])
{
    char linea[256];

    ifstream entrada;
    ofstream salida;
    entrada.open(origen);
    salida.open(destino);

    if (entrada.good())
    {
        while (!entrada.eof())
        {
            entrada.getline(linea,256);
            upperCase(linea);
            salida << linea << endl;
        }
    }else{
        cout<<"Error"<<endl;
    }
    entrada.close();
    salida.close();


}