//Recursividad

//Factorial de un número

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funcion
int factorial(int);

int main(){
	cout<<factorial(5)<<endl;
	
	
	getch();
	return 0;
}

int factorial(int n){	
	if(n==0){
		n = 1;
	}	
	else{
		n = n * factorial(n-1);
	}
	
	return n;
}
