//Algoritmos STL - Transformación

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

//Funcion para pasar un letra a MAYUSCULA
void mayusculas(char &letra){
	if(letra>='a' && letra<='z'){
		letra = letra - ('a' - 'A');
	}
}

//Funcion unaria para identificar vocales
char vocales(char letra){
	return (letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U') ? letra : '-';
}

int main(){
	vector<char> letras;
	
	//generar un vector con letras en minuscula
	for(int i=0;i<10;i++){
		letras.push_back('a' + i);
	}
	
	//mostramos en pantalla
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	//Desordenamos las letras
	random_shuffle(letras.begin(),letras.end());
	
	cout<<"\nVector desordenado: "<<endl;
	
	//mostramos en pantalla
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	//Aplicar a cada elemento la funcion mayusculas
	for_each(letras.begin(),letras.end(),mayusculas);
	
	cout<<"\nVector en Mayusculas"<<endl;
	
	//mostramos en pantalla
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	cout<<"\nVocales encontradas"<<endl;
	
	//buscar las vocales
	transform(letras.begin(),letras.end(),
		ostream_iterator<char> (cout,"|"),vocales);
	
	return 0;
}
