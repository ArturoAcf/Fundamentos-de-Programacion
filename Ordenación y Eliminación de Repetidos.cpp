#include <iostream>

using namespace std;

int main(){
	const int TAM=100;
	int vector[TAM], utils, numero, aux=0, i=0, j;
	
	cout<<"Introduce numeros (-1 para terminar): "<<endl;
	cin>>numero;
	
	while(numero!=-1){
		vector[utils]=numero;
		utils++;
		cin>>numero;
	}
	
	cout<<"Vector: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	
	for(int i=1; i<utils; i++){
		for(int j=0; j<utils-1; j++){
			if(vector[j]<vector[j+1]){ //> para ordenar de forma decreciente
				aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;
			}
		}
	}
	
	cout<<endl<<"Vector ordenado: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	
    while(i<utils){
    		j=i+1;
    	while(j<utils){//*******************************
    	   if(vector[i]==vector[j]){
    	   	   for(int k=j; k<utils-1; k++){
    	   	      vector[k]=vector[k+1];
    	   	   }									 
    	   	   utils--;
		   }else{
				j++;
		   }	
		}//**********************************************
		i++;    
	}
	
	cout<<endl<<"Vector sin repetidos: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	
	return 0;
}
