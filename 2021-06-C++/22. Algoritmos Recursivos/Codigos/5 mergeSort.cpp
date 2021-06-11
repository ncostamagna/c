//Ordenamiento por Mezclas - MergeSort

#include<iostream>
using namespace std;

void mezcla(int a[],int izquierda,int medio,int derecha){
	int* aux;
	int i,k,z;
	aux = new int[derecha-izquierda + 1];
	i = z = izquierda;
	k = medio + 1;
	
	//bucle para la mezcla, utiliza aux[] como arreglo auxiliar
	while(i<=medio && k<=derecha){
		if(a[i] <= a[k]){
			aux[z++] = a[i++];
		}
		else{
			aux[z++] = a[k++];
		}
	}
	
	//Se mueven elementos no mezclados de sublistas
	while(i<=medio){
		aux[z++] = a[i++];
	}
	
	while(k<=derecha){
		aux[z++] = a[k++];
	}
	
	//Copia de elementos de aux[] hacia a[]
	for(int i=izquierda; i<=derecha;i++){
		a[i] = aux[i];
	}
	
	delete aux;
}

void mergesort(int a[],int primero,int ultimo){
	int central;
	
	if(primero < ultimo){
		central = (primero+ultimo)/2;
		mergesort(a,primero,central);
		mergesort(a,central+1,ultimo);
		mezcla(a,primero,central,ultimo);
	}
}

int main(){
	int arreglo[] = {5,7,2,1,9,10,16,25,8};
	
	mergesort(arreglo,0,8);
	
	for(int i=0;i<9;i++){
		cout<<arreglo[i]<<endl;
	}
	
	return 0;
}
