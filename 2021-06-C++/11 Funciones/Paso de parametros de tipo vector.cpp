/*Paso de parámetros de tipo vector

Parametros de la función:
	void nombreDeFuncion(tipo nombreArreglo[],int tamañoArreglo)
	
Llamada a la función
	nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

//Cuadrados de los elementos del vector

#include<iostream>
#include<conio.h>
using namespace std;

void cuadrado(int v[],int);
void muestra(int v[],int);

int main(){
	const int TAM = 5;
	int vec[TAM] = {1,2,3,4,5};
	cuadrado(vec,TAM);
	muestra(vec,TAM);
	
	getch();
	return 0;
}

void cuadrado(int v[],int tam){
	for(int i=0;i<tam;i++){
		v[i] *= v[i];
	}
}

void muestra(int v[],int tam){
	for(int i=0;i<tam;i++){
		cout<<v[i]<<endl;
	}
}
