/*Asignación dinamica de arreglos

new : Reserva el número de bytes solicitado por la declaración.
delete : Libera un bloque de bytes reservado con anterioridad.


Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
	pedirNotas();
	mostrarNotas();	
	
	getch();
	return 0;
}

void pedirNotas(){	
	cout<<"Digite el numero de calificaciones: ";
	cin>>numCalif;
	
	calif = new int[numCalif];
	
	for(int i=0;i<numCalif;i++){
		cout<<"Introduzca una nota: ";
		cin>>calif[i];
	}
}

void mostrarNotas(){
	cout<<"\n\nMostrando notas: \n";
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
}
 

