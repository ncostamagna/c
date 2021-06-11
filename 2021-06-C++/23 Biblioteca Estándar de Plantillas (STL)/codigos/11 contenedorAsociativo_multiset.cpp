// Contenedores Asociativos - Set y Multiset

#include<iostream>
#include<iterator>
#include<algorithm>
#include<set> //para set y multiset
using namespace std;

int main(){
	multiset<int> valores; //Creamos un multiset (MultiConjunto)
	
	//Insertar elementos
	valores.insert(5);
	valores.insert(10);
	valores.insert(11);
	valores.insert(1);
	valores.insert(3);
	
	//Mostrar por pantalla
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	//Insertamos valores duplicados
	valores.insert(10);
	valores.insert(3);
	valores.insert(3);
	valores.insert(3);
	
	//Mostrar por pantalla
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	//Buscar un elemento
	multiset<int>::iterator i = valores.find(2);
	
	if(i != valores.end()){
		cout<<"\nEl valor "<<*i<<" si ha sido encontrado"<<endl;
	}
	else{
		cout<<"\nEl valor no ha sido encontrado"<<endl;
	}
	
	//Contar las apariciones de 3
	cout<<"El valor de 3 aparece "<<valores.count(3)
	<<" veces en el multiset"<<endl;
	
	//Eliminar elementos del multiset
	valores.erase(3);
	
	//Mostrar por pantalla
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	return 0;
}
