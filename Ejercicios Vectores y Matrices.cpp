/*
Insetar elemento en una posición x
Ordenar de forma descendente x
Construir una matriz del tamaño del vector e introducirlo x
quitar elementos repetidos del vector x
Hallar la fila de la matriz mas alejada del vector x
Introducir otro vector en el principal x
Si existe en el vector una secuencia que sume t x
Hallar el numero más pequeño de las filas de la matriz, descartando esa columna N/A
Decir el numero más repetido del vector y el numero mas grande de este x
*/

#include <iostream>

using namespace std;

int main(){
	const int TAM=100;
	int vector[TAM], vector2[TAM];
	int num, utils=0, utils2=0, pos, orden;
	int matrix[TAM][TAM];
	int utils_f;
	int hamming=0, max=0, suma=0, sec;
	
	cout<<"EJERCICIOS PARA EXAMEN: "<<endl;
	cout<<"\nIntroduce los elementos del vector (Solo positivos, -1 para terminar): "<<endl;
	cin>>num;
	
	while(num>=0){
		vector[utils]=num;
		utils++;
		cin>>num;
	}
	
	cout<<"El vector es: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<"\nIntroduce un número para insertarlo en el vector: ";
	cin>>num;
	cout<<"Introduce la posición en la que deseas insertarlo: ";
	cin>>pos;
	//Insertar elemento en una posicion
	for(int i=utils; i>pos; i--){
		vector[i]=vector[i-1];
	}
	vector[pos]=num;
	utils++;
	
	cout<<"El vector insertando el "<<num<<" en la posición "<<pos<<" es: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<endl<<"--------------------------------"<<endl;
	//Ordenacion
	for(int i=1; i<utils; i++){
		for(int j=0; j<utils-1; j++){
			if(vector[j]<vector[j+1]){
				orden=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=orden;
			}
		}
	}
	
	cout<<"El vector ordenado de forma decreciente es: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<endl<<"--------------------------------"<<endl;
	//Quitar elementos repetidos
	for(int i=0; i<utils-1; i++){
		for(int j=i+1; j<utils; j++){
			if(vector[i]==vector[j]){
				for(int k=j; k<utils-1; k++){
					vector[k]=vector[k+1];
				}
				utils--;
				j--;
			}
		}
	}
	
	cout<<"El vector sin elementos repetidos es: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<endl<<"--------------------------------"<<endl;
	
	cout<<"Introduce los elemntos de la matriz: "<<endl;
	for(int i=0; i<utils; i++){
		for(int j=0; j<utils; j++){
			cout<<"M["<<i<<"]["<<j<<"]= ";
			cin>>num;
			matrix[i][j]=num;
		}
		cout<<endl;
	}
	
	cout<<"La matriz es: "<<endl;
	for(int i=0; i<utils; i++){
		for(int j=0; j<utils; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"--------------------------------"<<endl;
	//Distancia de hamming
	for(int i=0; i<utils; i++){
		for(int j=0; j<utils; j++){
			if(matrix[i][j]!=vector[j]){
				hamming++;
			}
		}
		
		if(hamming>max){
			max=hamming;
			sec=i;
			hamming=0;
		}
	}
	
	cout<<"La fila de la matriz más alejada del vector es: ";
	for(int i=0; i<utils; i++){
		cout<<matrix[sec][i]<<" ";
	}
	
	cout<<endl<<"--------------------------------"<<endl;
	//Introducir array en matriz
	cout<<"Introduce la fila de M en la que desea insertar el vector: ";
	cin>>pos;
	utils_f=utils+1;
	while(pos>=utils_f){
		cin>>pos;
	}
	
	for(int i=utils_f; i>=pos; i--){
		for(int j=0; j<utils; j++){
			matrix[i][j]=matrix[i-1][j];
		}
	}
	
	for(int i=0; i<utils; i++){
		matrix[pos][i]=vector[i];
	}
	
	cout<<"La matriz quedaría de la siguiente forma: "<<endl;
	for(int i=0; i<utils_f; i++){
		for(int j=0; j<utils; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"--------------------------------"<<endl;
	//Introducir un vector al final de otro
	cout<<"Introduce elementos para el vector a introducir (-1 para terminar): "<<endl;
	cin>>num;
	
	while(num>=0){
		vector2[utils2]=num;
		utils2++;
		cin>>num;
	}
	
	cout<<"Vector 1: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<"\nVector 2: ";
	for(int i=0; i<utils2; i++){
		cout<<vector2[i]<<" ";
	}
	
	int q=0, w=utils;
	
	while(q<utils){
		vector[q]=vector[q];
		q++;
	}
	q=0;
	
	while(w<utils+utils2){
		vector[w]=vector2[q];
		q++;
		w++;
	}
	
	cout<<"\nVcetor mezcla: ";
	for(int i=0; i<utils+utils2; i++){
		cout<<vector[i]<<" ";
	}
	
	cout<<endl<<"--------------------------------"<<endl;
	//Secuencia suma
	cout<<"Introduce un elemento para ver si existe una secuencia en el vector que lo sume: ";
	cin>>num;
	
	for(int i=0; i<utils; i++){
			suma=vector[i];
		for(int j=i+1; j<utils; j++){
				suma=suma+vector[j];
			if(suma==num){
				cout<<"Existe una secuencia en la posición "<<i;
			}else{
				cout<<"No existe secuencia"<<endl;
			}
		}
	}
	
	cout<<endl<<"--------------------------------"<<endl;
	
	int vector_frec[TAM];
	int maxi=0;
	int max_frec=0;
	int utils_frec;
	int most;
	//Elemento mas repetido
	for(int i=0; i<100; i++){
		vector_frec[i]=0;
	}
	
	for(int i=0; i<utils+utils2; i++){
		if(vector[i]>maxi){
			maxi=vector[i];
		}
		
		vector_frec[vector[i]]++;
	}	
	utils_frec=maxi+1;
	
	for(int i=0; i<utils_frec; i++){
		if(vector_frec[i]>max_frec){
			max_frec=vector_frec[i];
			most=i;
		}
	}
	
	cout<<"El elemento mas repetido es el "<<most;
	
	return 0;
}








