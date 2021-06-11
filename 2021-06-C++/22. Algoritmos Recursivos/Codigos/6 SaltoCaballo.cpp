//Algoritmo Salto del caballo

#include<iostream>
using namespace std;

const int N = 5;

int tablero[N][N];

//Desplazamientos relativos del caballo
int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

void escribeTablero(){
	int i,j;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<tablero[i][j]<<"|";
		}
		cout<<endl;
	}
	cout<<endl;
}

void saltoCaballo(int i,int x,int y,bool &exito){
	int nx,ny;
	int k=0;  // inicializa contador de posibles 8 movimientos
	exito=false;
	
	do{
		k++;
		nx = x + d[k-1][0];
		ny = y + d[k-1][1];
		
		//Determina si nuevas coordenadas son aceptables
		if((nx>=0) && (nx<N) && (ny>=0) && (ny<N) && (tablero[nx][ny]==0)){
			//Anota movimiento
			tablero[nx][ny] = i;
			escribeTablero();
			
			if(i < N*N){
				saltoCaballo(i+1,nx,ny,exito);
	
				//Analiza si se ha completado la solución
				if(!exito){
					tablero[nx][ny] = 0; // no se alcanzo la solución, se borra anotación
				}
			}
			else{
				exito = true; //Caballo a cubierto el tablero
	 		}
		}
	}while((k<8) && !exito);
}

int main(){
	bool exito;
	int fila = 2;
	int col = 2;

	tablero[fila][col] = 1;
		
	saltoCaballo(2,fila,col,exito);
	
	if(exito){
		cout<<"\nCamino encontrado"<<endl;
		escribeTablero();
	}
	else{
		cout<<"\nCamino no encontrado"<<endl;
	}
	 
	
	return 0;
}
