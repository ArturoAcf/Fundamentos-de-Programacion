#include <iostream>

using namespace std;

int main(){
	const int TAM=100;
	int matrix[TAM][TAM], vector[TAM], filas, cols, aux;
	
	//Creamos matriz de un tamaño pedido
	cout<<"Introduce el tamaño de la matriz a construir: "<<endl;
	cout<<"Filas: ";
	cin>>filas;
	cout<<"Columnas: ";
	cin>>cols;
	
	cout<<"Intrduce los elementos de la matriz: "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<cols; j++){
			cout<<"matrix["<<i<<"]["<<j<<"]"<<"->";
			cin>>matrix[i][j];
		}
	}
	
	cout<<"La matriz es: "<<endl<<"MATRIX"<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<cols; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"----------------------------------------"<<endl;
	
	cout<<endl<<"Introduce los elementos del vector: "<<endl;
	for(int i=0; i<cols; i++){
		cin>>vector[i];
	}
	
	cout<<"El vector es: "<<endl<<"VECTOR-> ";
	for(int i=0; i<cols; i++){
		cout<<vector[i]<<" ";
	}
	cout<<endl;
	cout<<"----------------------------------------"<<endl;
	
	cout<<"El vector ordenado en orden decrecientes es: "<<endl<<"VECTOR ORDENADO->";
	for(int i=0; i<cols; i++){
      for(int j=cols-1; j>i; j--){
         if(vector[j]>vector[j-1]){
            aux=vector[j];
            vector[j]=vector[j-1];
            vector[j-1]=aux;
         }
      }
      cout<<vector[i]<<" ";
   }
   cout<<endl;
   cout<<"----------------------------------------"<<endl;
   
   cout<<"La matriz con el vector insertado es: "<<endl<<"MATRIX"<<endl;
   
   //Desplazamos la matriz una fila hacia abajo
   filas++;
   for(int i=filas; i>=1; i--){
      for(int j=0; j<cols; j++){
         matrix[i][j]=matrix[i-1][j];
      }
   }
   
   //Insertamos el vector en la fila 0
   for(int i=0; i<cols; i++){
      matrix[0][i]=vector[i];
   }
   
   for(int i=0; i<filas; i++){
   		for(int j=0; j<cols; j++){
   			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
   }
   
	return 0;
}
