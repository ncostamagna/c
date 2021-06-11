//Iteradores - Random acces iterators

#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

//Funcion template para mostrar los elementos de un contenedor
template <class Iter>
void mostrarEnPantalla(Iter inicio,Iter final){
	while(inicio != final){
		cout<<*inicio <<"|";
		inicio++;
	}
}

int main(){
	vector<char> letras(10); //Creamos un arreglo de char (10 elementos)
	
	//Agregamos letras aleatorias entre A-Z
	for(int i=0;i<10;i++){
		letras[i] = 'A' + (rand() % 26);
	}
	
	//Visualizar el contenido
	mostrarEnPantalla(letras.begin(),letras.end());
	cout<<endl;
	
	//Visualizar el contenido en orden inverso
	mostrarEnPantalla(letras.rbegin(),letras.rend());
	cout<<endl;
	
	//Visualizamos solo los elementos del medio (1-8)
	mostrarEnPantalla(letras.begin()+1,letras.end()-1);
	cout<<endl;
	
	return 0;
}
