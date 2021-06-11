//Iteradores - Forward iterators

#include<iostream>
#include<fstream> //para archivos
#include<iterator> //para streams_iterators
#include<cstdlib>
#include<vector>
using namespace std;

int main(){
	ifstream archivo;
	
	archivo.open("documento.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}

	istream_iterator<char> p(archivo);
	
	vector<char> frase;
	while(!archivo.eof()){	
	
		frase.push_back(*p); //Agregamos al vector
		p++;
	}

	//Mostramos el contenido de frase
	for(int i=0;i<frase.size();i++){
		cout<<frase[i];
	}
	cout<<endl;
	
	archivo.close();
	return 0;
}
