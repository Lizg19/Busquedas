#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream archivo;
  archivo.open("interpolacion.txt",ios::app);
  archivo << "INTERPOLACION \n";
    int A[7]={1,2,3,4,5,6,7};


    int primero=0;
    int ultimo= 7-1;
    int medio, contador=0;
    int n=8; // ELEMENTO QUE SE ESTA BUSCANDO
    archivo << "ARREGLO: ";
    for (int i=0;i<7;i++){
        archivo << A[i] << " ";
    }
    archivo << "\nNumero a buscar " << n  << "\n";

    while (A[primero]!= n && contador<7){
        medio= primero+ ((n-A[primero])*(ultimo -primero))/ (A[ultimo]-A[primero]); // para calcular el elemento medio
        if(A[medio]<n)
            ultimo = medio+1;
        else if (A[medio]>n)
            ultimo= medio-1;
        else
            primero= medio;

        contador++;
        break;
    }

    // verificar la comprobacion
    if( A[primero]== n)
    {
        cout << "ELEMENTO ENCONTRADO" << endl;
        archivo << "ELEMENTO ENCONTRADO" << endl;
        cout << "posicion: " << medio;
    } else{
        cout <<  "ELEMENTO NO ENCONTRADO";
        archivo <<  "ELEMENTO NO ENCONTRADO";
    }
archivo.close();
    return 0;
}
