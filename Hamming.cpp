#include <iostream>

using namespace std;

int main(){
	char matrix[100][100];
	char c;
	int hamming=0;
	int hamming_anterior=0;
	int utils;
	int sec=0;
	
	cout<<"Introduce el tamaño de las secuencias: "<<endl;
	cin>>utils;
	
	cout<<"\nIntroduce elementos para la cadena principal: "<<endl;
	
	for(int i=0; i<utils; i++){
		for(int j=0; j<utils; j++){
			cout<<"M["<<i<<"]["<<j<<"]= ";
			cin>>c;
			matrix[i][j]=c;
		}
		cout<<endl;
	}
	
	cout<<"Las secuencias son: "<<endl;
	for(int i=0;  i<utils; i++){
		for(int j=0; j<utils; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//j->
	//i abajo
	
	for(int i=1; i<utils; i++){
		for(int j=0; j<utils; j++){
			if(matrix[i][j]!=matrix[0][j]){
				hamming++;
			}	
		}
		if(hamming_anterior<hamming){
			hamming_anterior=hamming;
			sec=i;
			hamming=0;
		}
	}
	
	cout<<"La secuencia más alejada de la primera es: ";
	for(int i=0; i<utils; i++){
		cout<<matrix[sec][i]<<" ";
	}
	
	return 0;
}



