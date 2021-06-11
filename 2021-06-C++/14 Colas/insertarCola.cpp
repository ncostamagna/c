//Insertar elementos en una cola

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Prototipos de Función
void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	
	getch();
	return 0;
}

//Función para insertar elementos en una cola
void insertarCola(Nodo *&frente,Nodo *&fin,int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;	
	}	
	
	fin = nuevo_nodo;
	
	cout<<"\tElemento "<<n<<" insertado a cola correctamente\n";
}

//Función para determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

