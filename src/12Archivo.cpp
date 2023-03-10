#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

void Loading()
{ 
    int ind =0;
    string c= "\\|/-|"; 
    for(int i=0; i<= 100; i++)
    {   
        //updateBar(i);
        if(i % 4 ==0)
            ind =0;
        cout    << "\r" << c[ind++]   
                << " " << i << "%";
        usleep(90000);
    }
}

void LeerArchivo(string pathFile)  //-->  datafiles/ListaAlumnos.txt
{
    string s;
    fstream f;
    f.open(pathFile, ios_base::in);
    if ( !f.is_open() ) 
        cout << "Error de abrir el archivo." << endl;
    else
        do 
        {
            getline( f, s );
            cout << s << endl;
        }while( !f.eof() );
    f.close();
}
void CrearArchivo(string pathFile)  //-->  datafiles/ListaAlumnos.txt
{
    string s;
    fstream f;

    cout << "Escibiendo en un archivo" << endl;
    f.open(pathFile, ios_base::app);

    if (f.is_open())
    {
        do
        {
            cout<< "(N = salir ) Ingresa un nombre: ";
            cin>>s;
            if (s!="N")
                f << s << endl;
        } while (s!="N");
    }
    f.close();
}

int main()
{
    //Loading();
    CrearArchivo("texto/ListaAlumnos.txt");
    LeerArchivo("texto/ListaAlumnos.txt");
    return 0;
}
