/*Transmisión de Direcciones

Ejemplo: Intercambiar el valor de 2 variables. */ 

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion
void intercambio(float *,float *);

int main(){
	float num1 = 20.5, num2 = 6.78;
	
	cout<<"Primer Numero: "<<num1<<endl;
	cout<<"Segundo Numero: "<<num2<<endl;
	
	intercambio(&num1,&num2); //llamando a la funcion intercabio
	
	cout<<"\nLuego del intercambio: "<<endl;
	cout<<"Nuevo valor de num1: "<<num1<<endl;
	cout<<"Nuevo valor de num2: "<<num2<<endl;	
	
	getch();
	return 0;
}

void intercambio(float *dirNm1, float *dirNm2){
	float aux;
	
	aux = *dirNm1; //Guarda el valor de num1
	*dirNm1 = *dirNm2; //Mueve el valor de num2 a num1
	*dirNm2 = aux; //Cambia el valor a num2
}
