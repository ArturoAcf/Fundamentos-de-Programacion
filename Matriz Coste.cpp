#include <iostream>

using namespace std;

int main(){
	const int TAM=300;
	int MatrizX[TAM][TAM];
	int matrix[TAM][TAM];
	//int MatrizPedidos[TAM][TAM]; Matriz dada por el ejercicio. No es necesario rellenarla
	int n; //Dimensión de la matriz
	int min=0, max=100;
	int pos;
	bool p[TAM];
	int coste_total;
	
	n=3; //3 ya que es el tamaño de la matriz que se nos proporciona en el ejemplo, pero podría pedirse el tamaño y funciona igual.
	
	/*
	EN EL EXAMEN DE TEORÍA SE NOS PROPORCIONA ESTA MATRIZ YA INSERTADA:
	
	MatrizPedidos[0][0]=21;
	MatrizPedidos[0][1]=12;
	MatrizPedidos[0][2]=31;
	MatrizPedidos[1][0]=16;
	MatrizPedidos[1][1]=14;
	MatrizPedidos[1][2]=25;
	MatrizPedidos[2][0]=12;
	MatrizPedidos[2][1]=18;
	MatrizPedidos[2][2]=20;
	*/
	
	//Realizaré el ejercicio para que se pidan los valores de la matriz en lugar de trabajar con la del ejemplo
	//PD: el algoritmo será el mismo 
	
	cout<<"Introduce los elementos de la matriz con la que trabajaremos: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"M["<<i<<"]["<<j<<"]= ";
			cin>>matrix[i][j];
		}
	}
	cout<<"-----------------------------------"<<endl;
	
	cout<<"Matriz con la que trabajaremos: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matrix[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"-----------------------------------"<<endl;
	
	//Algoritmo del ejercicio
	
	//"Cargar valores de la matriz B"
	
	for(int i=0; i<n; i++){
			min=max;
		for(int j=0; j<n; j++){
			if(matrix[i][j]<min && p[j]==false){
				min=matrix[i][j];
				pos=j;
			}
		}
		p[pos]=true;
		MatrizX[i][pos]=1;
		coste_total=coste_total+min;
	}
	cout<<"-----------------------------------"<<endl;	
	
	//Muestro el resultado final
	cout<<"Coste: "<<coste_total<<endl;
	cout<<"Matriz X de la matriz: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<MatrizX[i][j]<<" ";
		}
	cout<<endl;
	}
	cout<<"-----------------------------------"<<endl;
	
	return 0;
}
