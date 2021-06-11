// Contenedor lineal - list

#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> datos;
	
	// 7 2 5 1 6
	
	//insertar elementos
	datos.push_back(5);
	datos.push_back(1);
	datos.push_back(6);
	
	datos.push_front(2);
	datos.push_front(7);
	
	//Ordenar la lista
	datos.sort();
	
	// 1 2 5 6 7
	
	//Crear un iterador para listas llamado i
	list<int>::iterator i;
	
	//Hacer que i apunte al primer elemento de la lista
	i = datos.begin();
	
	//Recorrer la lista incrementando i hasta llegar al final
	while(i != datos.end()){
		cout<< *i <<"|";
		
		i++;
	}
	
	cout<<endl;
	
	//Eliminamos elementos
	datos.pop_front();
	datos.pop_back();
	
	//Hacer que i apunte al primer elemento de la lista
	i = datos.begin();
	
	//Recorrer la lista incrementando i hasta llegar al final
	while(i != datos.end()){
		cout<< *i <<"|";
		
		i++;
	}
	
	return 0;
}

