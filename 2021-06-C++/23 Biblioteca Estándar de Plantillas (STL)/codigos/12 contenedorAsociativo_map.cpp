// Contenedores Asociativos - map y multimap

#include<iostream>
#include<iterator>
#include<map>
using namespace std;

typedef pair<int,string> par;

int main(){
	map<int,string> valores; //Creamos un map<clave,valor>
	
	//Insertar elementos
	valores.insert(par(5,"Alejandro"));
	valores.insert(par(2,"Estefany"));
	valores.insert(par(1,"Fatima"));
	valores.insert(par(7,"Juan"));
	
	//Mostrar los valores del map
	map<int,string>::iterator i;
	for(i=valores.begin(); i!=valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	cout<<endl;
	
	//Buscar un valor por su clave
	i = valores.find(1);
	
	if(i != valores.end()){
		cout<<"Valor encontrado = "<<i->second<<endl;
	}
	else{
		cout<<"Valor no encontrado"<<endl;
	}
	cout<<endl;
	
	//Eliminar un elemento
	valores.erase(7);
	
	//Mostrar los valores del map
	for(i=valores.begin(); i!=valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	cout<<endl;
	
	return 0;
}
