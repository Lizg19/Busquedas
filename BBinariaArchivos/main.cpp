#include <iostream>

using namespace std;
#include <fstream>
int main()
{
    ofstream busquedaB;
    busquedaB.open("binaria.txt",ios::out);
    int b,i,j,k;
    int a[10]= {1,2,3,4,5,6,7,8,9};
    i=0;
    j=10-1;
    b=8;

    busquedaB << "Los elementos son: " << a[0] << " "<< a[1] <<" "<< a[2] <<" "<<a[3] <<" "<<a[4] << " "<< a[5] << " "<< a[6] <<" "<< a[7] <<" "<<a[8] << "\n";
    do{
        k=(i+j)/2;
        if(a[k]<=b){
            i=k+1;
        }
        if( a[k]>=b){
            j=k-1;
        }


    } while(i<=j);
    busquedaB << "Elemento a buscar: 8 \n";
    busquedaB << "Elemento encontrado en: " << a[k];
    busquedaB.close();

    ifstream archivoLectura;
    string texto;

   archivoLectura.open("binaria.txt", ios::in);
       while (!archivoLectura.eof()){
        getline(archivoLectura,texto);
        cout << texto << endl;
       }
   archivoLectura.close ();

    return 0;
}
