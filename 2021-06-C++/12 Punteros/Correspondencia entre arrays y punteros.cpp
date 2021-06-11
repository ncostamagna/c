//Correspondencia entre arrays y punteros

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[] = {1,10,32,2,5};
	int *p_numeros;
	
	p_numeros = numeros; 
	
	for(int i=0;i<5;i++){
		cout<<*p_numeros++<<endl;
	}
	
	getch();
	return 0;
}
