// Método de la Bisección
// Autor: Abalos, Alaniz, Utello
// Fecha: 25/09/2017
//------------------------------------------------------------------------------         
#include <iostream> //es utilizado para operaciones de entrada/salida
#include <math.h> //diseñado para operaciones matemáticas básicas
#include <conio.h> //para proveer un sistema de E/S por consola

using namespace std;

//variables

double a,b,p,tol,fp,fa,fb,x,y,error;

int    i,j,iter,ciclos;

//definimos la funcion a estudiar

double funcion1 (double x) {
	double y = x*sin(x);
	return y; 
}
	
int main() 
{
    cout << "Metodo de la biseccion." << endl;
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
i=1; //sirve como condicion para terminar el while
j=0; //sirve como condicion para el if
	while (i<=iter)
    {
          p=((a+b)/2); 
          fp=funcion1(p); 
          fa=funcion1(a);
          fb=funcion1(b);
          
          if (fp==0){
                     j=1; //si la funcion es igual cero el error es cero,
                     a=0; //llevamos estas variables a cero para que el error de cero
                     b=0;
                     i=iter+1;
                     }
          if (((b-a)/2)<tol && (fa*fp)<0){ //si el error es menor que la tolerancia y a su vez, 
                    j=1;                   //la funsion es negativa y positiva en y b hay una raiz.
                    i=iter+1;
            }
          else
          {
				
            if ((fa*fp)>0)
            {
            a=p;
            }
            else
            {
            b=p;
            }
    }
            i++;
            ciclos++;
            error = fabs((b - a)/2);
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
            
            
            
            
	
