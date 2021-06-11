// Contenedores Asociativos - Set y Multiset

#include<iostream>
#include<iterator>
#include<algorithm>
#include<set> //para set y multiset
using namespace std;

int main(){
	set<int> valores;
	
	//Insertar valores en set (Conjunto) 
	valores.insert(10);
	valores.insert(3);
	valores.insert(15);
	valores.insert(1);
	valores.insert(5);
	
	//Mostramos los valores por pantalla
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	//Buscar un elemento en set (conjunto)
	set<int>::iterator i = valores.find(2);
	
	if(i != valores.end()){
		cout<<"\nEl valor "<<*i<<" si existe en el set (conjunto)"<<endl;
	}
	else{
		cout<<"\nEl valor no existe"<<endl;
	}
	
	//Eliminar un elemento en el set (Conjunto)
	
	valores.erase(1);
	
	//Mostramos los valores por pantalla
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	return 0;
}
