//Algoritmos STL - Matemáticos

#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<numeric> //para accumulate
using namespace std;

//Funcion para comprobar si un numero es positivo
template <class T>
bool esPositivo(T valor){
	return (valor>=0);
}

int main(){
	vector<float> numeros;
	
	//Abrimos el archivo en modo lectura
	ifstream archivo("archivoNumerico.txt",ios::in);
	
	//Copiamos los numeros del archivo hacia el vector numeros
	copy(istream_iterator<float>(archivo),istream_iterator<float>(),back_inserter(numeros));
	
	//Cerramos el archivo
	archivo.close();
	
	//Calcular el maximo y minimo elemento del vector
	cout<<"Maximo: "<<*max_element(numeros.begin(),numeros.end())<<endl;
	cout<<"Minimo: "<<*min_element(numeros.begin(),numeros.end())<<endl;
	
	//Calcular el valor promedio
	cout<<"\nValor promedio: "
	<<accumulate(numeros.begin(),numeros.end(),0.0)/numeros.size()<<endl;
	
	//Cantidad de elementos positivos
	cout<<"Cantidad de numeros positivos: "
	<<count_if(numeros.begin(),numeros.end(),esPositivo<float>)<<endl;
	
	
	return 0;
}

