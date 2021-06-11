// Algoritmos - Iniciando con algorithm

#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
#include<cstdlib>
using namespace std;

int numerosAleatorios(){
	return rand()%10;
}

int main(){
	list<int> valores(10); //Lista de 10 valores enteros
	
	//Generar elementos aleatorios para la lista
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	//Mostrar los elementos de la lista por pantalla
	ostream_iterator<int> salida(cout,"|");
	copy(valores.begin(),valores.end(),salida);
	
	//Buscar la primera aparicion del numero 8 en la lista
	list<int>::iterator i;
	i = find(valores.begin(),valores.end(),8);
	
	cout<<endl;
	
	//Analizamos si i quedo dentro del rango de busqueda
	if(i != valores.end()){
		cout<<"El valor "<<*i<<" esta en la lista"<<endl;
	}
	else{
		cout<<"El valor no esta en la lista"<<endl;
	}
	
	return 0;
}
