#include <iostream>

using namespace std;

void Pinta(double freq, double max_freq, int max_caracter){
        int dibujos = freq/max_freq * max_caracter;
        for(int i=0; i<dibujos;i++)
            cout << "#";
    }

int main(){
	const int TAM=100;
	float numero;
	int vector[TAM];
	int cont=0, utils_cont=11;
	int max=-1;
	const int max_car=50;
	
	for(int i=0; i<utils_cont; i++){
		vector[i]=0;
	}
	
	cout<<"Introduzca las notas (-1 para terminar): "<<endl;
	cin>>numero;
	
	while(numero>=0 && numero<=10){
		cont++;
		int nota=numero+0.5;
		vector[nota]++;
		cin>>numero;
	}
	
	cout<<endl<<"Cargadas "<<cont<<" calificaciones"<<endl;
	
	if(cont>0){
		cout<<"Frecuencias: ";
		for(int i=0; i<utils_cont; i++){
			cout<<vector[i]<<" ";
		}
		
		for(int i=0; i<utils_cont; i++){
			if(vector[i]>max){
				max=vector[i];
			}
		}
		
		cout<<endl<<"Frecuencia maxima: "<<max;
		cout<<endl<<"\tEn calificaciones: ";
		for(int i=0; i<utils_cont; i++){
			if(max==vector[i]){
				cout<<i<<" ";
			}
		}
		
		cout<<endl<<"Con histograma: "<<endl;
		for(int i=0; i<utils_cont; i++){
            Pinta(vector[i], max, max_car);
            cout<<"| "<<i<<endl;
       }
	}else{
		cout<<"No hay notas que preocesar"<<endl;
	}
	
	return 0;
}
