/*Matrices Dinámicas

Ejemplo: Rellenar una matriz de NxM y mostrar su contenido 

**puntero_matriz -> *puntero_fila -> [int] [int] [int]
				    *puntero_fila -> [int] [int] [int]
				    *puntero_fila -> [int] [int] [int]
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **,int,int);

int nFilas,nCol,**puntero_matriz;

int main(){	
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
		
	//Elimino cada vector de la matriz
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	
	//Elimino el vector principal
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de columnas: ";
	cin>>nCol;
	
	//Reservar memoria para las filas
	puntero_matriz = new int*[nFilas];
	
	for(int i=0;i<nFilas;i++){
		//Reservar memoria para las columnas
		puntero_matriz[i] = new int[nCol];
	}
	
	cout<<"\nDigitando los elementos de la matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
	cout<<"\n\nElementos de la matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}	
}
