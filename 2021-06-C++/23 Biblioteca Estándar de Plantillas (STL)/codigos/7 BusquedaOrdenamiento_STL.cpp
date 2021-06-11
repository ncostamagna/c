//Algoritmos de Búsqueda y Ordenamiento

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cstdlib>
using namespace std;

int numerosAleatorios(){
	return rand()%30;
}

//Funcion logica para saber si un numero es par
template <class T>
bool esPar(T valor){
	return ((valor%2) == 0);
}

int main(){
	vector<int> valores(10);
	
	//Generar numeros aleatorios y almacenarlos en el vector
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	//Mostrar los elementos de vector
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	
	cout<<"\n\nNumeros pares del vector"<<endl;
	
	//Creamos un vector para almacenar los elementos pares
	vector<int> pares;
	
	//Creamos un iterador y lo inicializamos al principio de vector(valores)
	vector<int>::iterator i = valores.begin();
	
	while((i=find_if(i,valores.end(),esPar<int>)) != valores.end()){
		pares.push_back(*i);
		i++;
	}
	
	//Ordenamos el vector pares 
	sort(pares.begin(),pares.end());
	
	//Mostramos por pantalla
	copy(pares.begin(),pares.end(),ostream_iterator<int> (cout,"|"));
	
	return 0;
}


