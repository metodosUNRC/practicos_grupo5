// Método de la secante
// Autor: Abalos, Alaniz, Utello
// Fecha: 25/09/2017
//------------------------------------------------------------------------------         
#include <iostream> //es utilizado para operaciones de entrada/salida
#include <math.h> //diseñado para operaciones matemáticas básicas
#include <conio.h> //para proveer un sistema de E/S por consola

using namespace std;

//variables

double a,b,p,p0,q0,q1,tol,fp,fa,fb,x,y,error;

int    i,j,iter,ciclos;

//definimos la funcion a estudiar

double funcion4 (double x) {
	double y = 3*pow(x,2)-exp(x);
	return y; 
}
	
int main() 
{
    cout << "Metodo de la secante." << endl;
	cout << endl;
	cout << "definir un intervalo [a,b]donde se analizara si existe una raiz del funcion" << endl;
	cout << endl;
	cout << "ingrese el valor a del intervalo: ";
	cin  >> a;
	cout << endl;
	cout << "ingrese el valor b del intervalo: ";
	cin  >> b;
	cout << endl;
	cout << "" ;
	cout << endl;
	cout << "ingrese la tolerancia de aproximacion: ";
	cin  >> tol;
	cout << endl;
	cout << "Ingrese la cantidad de iteraciones que desea maximas: ";
	cin  >> iter;
	cout << endl;
	
	//evaluando
	
ciclos=0; // cantidad de ciclos while
i=2; //sirve como condicion para terminar el while
j=0; //sirve como condicion para el if
fa=funcion4(a);
fb=funcion4(b);
if (fa>0)
         {
         p0=b;
         q0=fa;
         q1=fb;
         }
if (fa<0)
         {
         p0=a;
         q0=fb;
         q1=fa;
         }   
                  
while (i<=iter)
    {
          if (fa>0)
          {
                  p=p0-((q1/(q1-q0))*(p0-a)); 
          }
          if (fa<0)
          {
                  p=p0-((q1/(q0-q1))*(b-p0));
          }
          
          if (fabs(p-p0)<tol)
          {  
                    j=1;                   
                    i=iter+1;
          }
            else
            {
            p0=p;
            q1=funcion4(p);
            }
            i++;
            ciclos++;
            error = fabs(p-p0);
    }
    	
            if (j==1)
            {
                cout << "la raiz es: "                        << p      << endl;
				cout << "la cantidad de iteraciones fueron: " << ciclos << endl;
				cout << "el error cometido es: "              << error  << endl;
            }
            else
            {
                 cout << "el metodo fracaso despues de:" << iter << "iteraciones" << endl;
            }
            getch();
 }
            
            
            
            
	
