//Insertar Elementos en la pila

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int); //Prototipo de Funcion

int main(){
	Nodo *pila = NULL;
	int n1,n2;
	
	cout<<"Digite un numero: ";
	cin>>n1;
	agregarPila(pila,n1);
	
	cout<<"Digite otro numero: ";
	cin>>n2;
	agregarPila(pila,n2);
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo(); //1. Crear el espacio en memoria para almacenar un nodo.
	nuevo_nodo->dato = n; //2. Cargar el valor dentro del nodo(dato).
	nuevo_nodo->siguiente = pila; //3. Cargar el puntero pila dentro del nodo(*siguiente).
	pila = nuevo_nodo; //4. Asignar el nuevo nodo a pila.
	
	cout<<"\tElemento "<<n<<" ha sido agregado a PILA correctamente"<<endl;
}
