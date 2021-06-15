//Busqueda Binaria

#include<iostream>
#include<conio.h>

using namespace std;

// El arreglo tiene que estar ordenado de manera ascendente
// es la seleccion por indice
int main(){
	int numeros[] = {1,2,3,4,5};
	int inf,sup,mitad,dato,i;
	char band='F';
	
	dato = 1;
	
	//Algoritmo de la Busqueda Binaria
	inf=0;
	sup=5;
	i=0;
	while((inf<=sup)&&(i<5)){
		mitad = (inf+sup)/2;
		if(numeros[mitad] == dato){
			band='V';
			break;
		}
		if(numeros[mitad]>dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(numeros[mitad]<dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
		i++;
	}
	
	if(band == 'V'){
		cout<<"El numero se encontro en la pos: "<<mitad<<endl;
	}
	else{
		cout<<"El numero NO se encontro";
	}
	
	getch();
	return 0;
}
