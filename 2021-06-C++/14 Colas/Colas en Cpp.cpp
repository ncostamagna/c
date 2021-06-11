//Colas en C++

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int valor;
	Nodo *sgte;	
};

//Prototipos de Funciones
void agregarCola(Nodo *&,Nodo *&,int);
void suprimirCola(Nodo *&,Nodo *&,int &);
bool cola_vacia (Nodo *);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarCola(frente,fin,dato);
	
	cout<<"Digite otro numero: ";
	cin>>dato;
	agregarCola(frente,fin,dato);
	
	while(frente != NULL){
		suprimirCola(frente,fin,dato);
		
		if(frente != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

//Funcion para insertar nodos a la cola
void agregarCola(Nodo *&frente,Nodo *&fin,int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo -> valor = n;
	nuevo_nodo -> sgte = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin -> sgte = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
}

//Funcion para extraer nodos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n){
	n = frente->valor;
	
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->sgte;
	}
	
	delete aux;
}

//Funcion para comprobar el estado de la cola, si esta vacia o no
bool cola_vacia(Nodo *frente){
	if(frente == NULL){
		return true;
	}
	else{
		return false;
	}
}
