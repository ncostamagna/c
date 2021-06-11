// Contenedores Asociativos - map y multimap

#include<iostream>
#include<iterator>
#include<map>
using namespace std;

typedef pair<int,string> par;

int main(){
	multimap<int,string> valores; //Creamos un multimap <clave,valor>
	
	//Insertar valores en el multimap
	valores.insert(par(3,"Jose"));
	valores.insert(par(2,"Maria"));
	valores.insert(par(5,"Alejandro"));
	valores.insert(par(1,"Estefany"));
	
	//Insertar elementos con claves repetidas
	valores.insert(par(1,"Kathy"));
	valores.insert(par(5,"Miguel"));
	valores.insert(par(5,"Paola"));
	
	//Mostrar por pantalla
	multimap<int,string>::iterator i;
	for(i=valores.begin(); i!=valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	cout<<endl;
	
	//Contar la cantidad de veces que aparece una clave
	cout<<"Conteo de la clave 5: "<<valores.count(5)<<endl;
	for(i=valores.lower_bound(5); i!=valores.upper_bound(5);i++){
		cout<<i->second<<" | ";
	}
	
	
	
	return 0;
}
