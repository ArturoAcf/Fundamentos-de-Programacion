#include <iostream>

using namespace std;

int main(){
	int vector[100];
	int vector_frec[100];
	int utils;
	int numero;
	int max=0, max2=0;
	
	for(int i=0; i<100; i++){
		vector[i]=0;
		vector_frec[i]=0;
	}
	
	cout<<"Introduce valores (-1 para terminar): ";
	cin>>numero;
	
	while(numero>=0){
		vector[utils]=numero;
		utils++;
		cin>>numero;
	}
	
	cout<<"Vector: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
		
		if(vector[i]>max){
			max=vector[i];
		}
	}
	cout<<endl;
	
	for(int i=0; i<utils; i++){
		vector_frec[vector[i]]+=1;
	}
	
	// Suma 1 en la posición pertinent. El número más repetido será la posición con el valor más alto.
	
	cout<<"Vector de frecuencias: ";
	for(int i=0; i<max+1; i++){
		cout<<vector_frec[i]<<" ";
		
		if(vector_frec[i]>max2){
			max2=vector_frec[i];
			numero=i;
		}
	}
	
	cout<<"\nEl valor que más se repite es el "<<numero;
}
