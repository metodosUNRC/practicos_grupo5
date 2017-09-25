// Método del punto fijo
// Autor: Abalos, Alaniz, Utello
// Fecha: 25/09/2017
//------------------------------------------------------------------------------         
#include <iostream> //es utilizado para operaciones de entrada/salida
#include <math.h> //diseñado para operaciones matemáticas básicas
#include <conio.h> //para proveer un sistema de E/S por consola

using namespace std;

//variables

double p,tol,p0,y,error;
int    i,j,iter,ciclos;

//definimos la funcion a estudiar

double funcion2 (double x) {
	double y = 3*pow(x,2)-exp(x);
	return y; 
}
//	De la función anterior despejo x=g(x).

double g2(double x) {
	double y = exp(x)/(3*x);
	return y;
}

int main() 
{
    cout << "Metodo del punto fijo." << endl;
	cout << endl;
	cout << "...................................................................." << endl;
	cout << endl;
	cout << "ingrese el punto donde desea comenzar: ";
	cin  >> p0;
	cout << endl;
	cout << "ingrese la tolerancia de aproximacion: ";
	cin  >> tol;
	cout << endl;
	cout << "Ingrese la cantidad de iteraciones que desea maximas: ";
	cin  >> iter;
	cout << endl;
	
//evaluando
	
ciclos=0; // cantidad de ciclos while
i=1; //sirve como condicion para terminar el while
j=0; //sirve como condicion para el if

    while (i<=iter)
    {
           p=g2(p0);
       
        if (fabs(p-p0)<tol)
       {
         j=1;
         i=iter+1;
       }
        else
       {
         p0=p;
       }
       i=i+1;
       error = fabs(p - p0);
       ciclos++;
    }
    if (j==1)
    {
                cout << "la raiz es: "                        << p      << endl;
				cout << "la cantidad de iteraciones fueron: " << ciclos << endl;
				cout << "el error cometido es: "              << error  << endl;
    }
            else
            {
                 cout << "el metodo fracaso despues de  " << iter << "  iteraciones" << endl;
            }
            
    getch();
 }







