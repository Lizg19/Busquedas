#include <iostream>
#include <fstream>
using namespace std;

int busqueda (int a [], int n , int dato);

int main()
{
    ofstream busquedaL;
    busquedaL.open("lineal.txt",ios::out);
    int a [5]={4,1,3,2,5};
    busquedaL << "Los elementos son: " << a[0] << " "<< a[1] <<" "<< a[2] <<" "<<a[3] <<" "<<a[4] << "\n";
    if(busqueda (a, 5,3)==-1){

        busquedaL << "Elemento no encontrado ";
    }else {
        busquedaL << "Elemento a buscar 3 \n";
        busquedaL << "Elemento encontrado en la posicion " << busqueda (a, 5,3);
    }
    busquedaL.close();

    ifstream archivoLectura;
    string texto;

   archivoLectura.open("lineal.txt", ios::in);
       while (!archivoLectura.eof()){
        getline(archivoLectura,texto);
        cout << texto << endl;
       }
   archivoLectura.close ();

    return 0;
}


int busqueda (int a [], int n , int dato){

    for (int i=0; i<n; i++){
        if(a[i]==dato){
            return i;
        }
    }
    return -1;
}
