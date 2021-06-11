/*Transmisión de arreglos

Ejemplo: Hallar el máximo elemento de un arreglo. */

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion
int hallarMax(int *,int);

int main(){
	const int nElementos = 5;
	int numeros[nElementos] = {3,5,18,24,1};
	
	cout<<"El maximo elemento es: "<<hallarMax(numeros,nElementos);
	
	getch();
	return 0;
}

int hallarMax(int *dirVec,int nElementos){
	int max=0; 
	
	for(int i=0;i<nElementos;i++){
		if(*(dirVec+i) > max){
			max = *(dirVec+i);
		}
	}
	
	return max;
}
