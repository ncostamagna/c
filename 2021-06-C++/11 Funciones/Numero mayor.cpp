//Ejemplo encontrar el mayor de 2 numeros

//Directivas de Preprocesador
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion
int encontrarMax(int x,int y);

int main(){
	int n1,n2;
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;	
	
	cout<<"El numero mayor es: "<<encontrarMax(n1,n2);
	
	getch();
	return 0;
}

//Definicion de Funcion
int encontrarMax(int x,int y){
	int numMax;
	
	if(x>y){
		numMax = x;
	}
	else{
		numMax = y;
	}
	
	return numMax;
}


