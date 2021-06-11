//Contenedor lineal - deque (doble cola)

#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<char> letras;
	
	// A B C D E F
	
	letras.push_front('C'); //Agregar elementos al principio
	letras.push_front('B');
	letras.push_front('A');
	
	letras.push_back('D'); //Agregar elementos por el final
	letras.push_back('E'); 
	letras.push_back('F');
	
	//Mostrar los elementos
	for(int i=0;i<letras.size();i++){
		cout<<letras[i]<<"|";
	}
	
	letras.pop_front(); //Eliminamos por el principio
	letras.pop_back(); //Eliminamos por el final
	
	cout<<endl;
	
	//Mostrar los elementos
	for(int i=0;i<letras.size();i++){
		cout<<letras[i]<<"|";
	}
	
	return 0;
}
