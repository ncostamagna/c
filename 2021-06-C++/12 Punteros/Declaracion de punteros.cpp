/*Punteros - Declaración de Punteros

&n = La direccion de n
*n = la variable cuya direccion esta almacenada en n

*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num,*dir_num;
	
	num = 20;
	dir_num = &num;
	
	cout<<"Numero: "<<num<<endl;
	cout<<"Direccion de num: "<<*dir_num<<endl;
	
	getch();
	return 0;
}
