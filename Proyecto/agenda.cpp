#include<iostream>
#include<fstream>
#include<cstring>
#define DIR_ARCHIVO "contactos.dat"
using namespace std;

struct Contacto{
    char nombre[30];
    char apellido[30];
    int edad;
    char correo[45];
};
void ingresarContacto(Contacto c);
Contacto leerContacto();
bool existeContacto(char nombre[], char apellido[]);
Contacto buscarContacto(char nombre[], char apellido[]);
void mostrarContacto(Contacto c);
int main()
{
    /*
        Ingresar contact
        Buscar contact
        Ver contactos
        Eliminar
        Actualizar
    */
    Contacto c = leerContacto();
    ingresarContacto(c);

    
    return 0;
}
void mostrarContacto(Contacto c)
{
    cout<<"\t\t\tINFORMACION";
    cout<<"\t\tNombre: "<<c.nombre<<endl;
    cout<<"\t\tApellido: "<<c.apellido<<endl;
    cout<<"\t\tEdad: "<<c.edad<<endl;
    cout<<"\t\tCorreo: "<<c.correo<<endl;
    cout<<endl;
}

Contacto buscarContacto(char nombre[], char apellido[])
{
    Contacto c;
    ifstream entrada;
    entrada.open(DIR_ARCHIVO,ios::binary);
    if (entrada.good())
    {   
        while (entrada.read((char*)&c, sizeof(Contacto)))
        {
            // strcmp comparacion de cadena
            if (strcmp(nombre, c.nombre) == 0 )
            {
                entrada.close();
                return c;
            }
            
        }   
   
    }
}
bool existeContacto(char nombre[], char apellido[])
{
    Contacto c;
    ifstream entrada;
    entrada.open(DIR_ARCHIVO,ios::binary);
    if (entrada.good())
    {   
        while (entrada.read((char*)&c, sizeof(Contacto)))
        {
            // strcmp comparacion de cadena
            if (strcmp(nombre, c.nombre) == 0 )
            {
                entrada.close();
                return true;
            }
            
        }   
        entrada.close();
        return false; 
    }else{
        entrada.close();
        return false;
    }
}
void ingresarContacto(Contacto c)
{
    ofstream salida;
    salida.open(DIR_ARCHIVO,ios::binary | ios::app);
    salida.write((char*)&c,sizeof(Contacto));

    salida.close();
}
Contacto leerContacto()
{
    Contacto c;
    cout<<"\t\tNombre: "; cin.getline(c.nombre,30);

    cout<<"\t\tApellido: "; cin.getline(c.apellido,30);
    
    cout<<"\t\tEdad: "; cin>>c.edad; cin.ignore();
    
    cout<<"\t\tCorreo: "; cin.getline(c.correo,45);

    return c;

}