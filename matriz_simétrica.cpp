// Matriz simetrica
// Autor: Utello Leonardo
// Fecha: 06/10/2017
// Este programa determina si una matriz es simetrica.
//------------------------------------------------------------------------------         
#include <iostream> //es utilizado para operaciones de entrada/salida
#include <math.h> //diseñado para operaciones matemáticas básicas
#include <conio.h> //para proveer un sistema de E/S por consola

using namespace std;

//variables.
int     filas,colum,iter,itermax,i,j,pos;
double  Emax,error,y;

//	Defino a la función.

		double simetrica (double **A) {
        for (i=0; i < filas; i++){
			for (int j=i+1; j < colum ; j++){
                
				if ( A[i][j] != A[j][i]){  //Comparo el elemnto de A(i,j) con el A(j,i)
				
				       y=0;
				}
				else {
                       y=1;                   
                }
	
			}
		}
	return y; 
}

int main () {
	
	//	Ingreso los valores de las filas y las columnas de la matriz
	do {
		cout << "Ingrese la cantidad de filas:  ";
		cin  >> filas;
		cout << "Ingrese la cantidad de columnas de la matriz:  ";
		cin  >> colum;
		cout << endl;
        cout << "" ;
		if (filas != colum){ // si el tamaño de filas y coumnas no son iguales la matriz no es cuadrada, por lo que los vuelvo a pedir hasta que lo sea.
			cout << endl;
			cout << "\n" << "La matriz no es cuadrada." << endl;
			cout << endl;
		}
	}while (filas != colum);
	
	//	Direcciono la cantidad de elementos de la matriz en la memoria.
	double **A = new double *[filas];
	for ( i=0; i<filas; i++){
		A[i] = new double [colum];
	}
	//	Cargo los valores de los elementos de la matriz.
	cout << "Ingrese los valores de la matriz por fila." << "\n" << endl;
	for ( j=0; j < colum; j++){
		for ( i=0; i < filas; i++){
			cout << "ingrese valor:   ";
			cin  >> A[i][j];
		}	
	}
	
	//	muestro la matriz en pantalla.
	cout << "\n" << "La matriz ingresada es: " << "\n" << endl;
	for ( j=0; j < colum; j++){
		for ( i=0; i < filas; i++){
			cout << "\t" << A[i][j];
		}	
		cout << endl;		
	}
	
	y = simetrica(A);
	
	if (y==0){
              	cout << "\n" << "La matriz no es simetrica." << endl;
               }
               else {
                    cout << "\n" << "La matriz es simetrica." << endl;
                    }
                    
	
	getch();
}
