/*Plantillas de Función

Ejemplo: Sacar el valor absoluto de un número */

#include<iostream>
#include<conio.h>
using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
	int num1 = -4;
	float num2 = -5.67;
	double num3 = -67.3456;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);	
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero = numero*-1;
	}
	
	cout<<"El valor absoluto es "<<numero<<endl;
}

