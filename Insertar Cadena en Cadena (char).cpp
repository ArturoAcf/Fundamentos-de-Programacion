#include <iostream>

using namespace std;

class secuenciaCaracteres{
	private: 
		static const int TAM=100;
		char vector[TAM];
		int utils;
		
	public:
		secuenciaCaracteres(){
			utils=0;
			
			for(int i=0; i<utils; i++){
				vector[i]='.';
			}
		}
		
		int getTam(){
			return TAM;
		}
		
		int getUtils(){
			return utils;
		}
		
		char getElemento(int pos){
			return vector[pos];
		}
		////////////////////////////////////////////////////////////////////////////////////////////////
		void insertaCaracter(char c, int pos){
			//if(utils+1<TAM){
				for(int i=utils; i>pos; i--){
					vector[i]=vector[i-1];
				}
				
				vector[pos]=c;
				utils++;
		//	}
		}
		////////////////////////////////////////////////////////////////////////////////////////////////
		void aniade(char c){
			insertaCaracter(c, utils);
		}
		
		void insertaSecuencia(secuenciaCaracteres sec, int pos){
			for(int i=0; i<sec.getUtils(); i++){
				insertaCaracter(sec.getElemento(i), pos);
				//pos++; Sin esto simplemente se muestra al final sec1 hasta la suma de el tamaño de ambas secuencias (No funciona con memoria dinámica obviamente)
			}
		}
};

int main(){
	char caracter;
	const char TERMINADOR='#';
	secuenciaCaracteres sec1;
	secuenciaCaracteres sec2;
	int pos;
	
	cout<<"Introduce elementos en la secuencia (# para terminar): "<<endl;
	cin>>caracter;
	
	while(caracter!=TERMINADOR){
		sec1.aniade(caracter);
		cin>>caracter;
	}
	
	cout<<"Introduce elementos en la secuencia a insertar (# para terminar): "<<endl;
	cin>>caracter;
	
	while(caracter!=TERMINADOR){
		sec2.aniade(caracter);
		cin>>caracter;
	}
	
	cout<<"Secuencia 1: ";
	for(int i=0; i<sec1.getUtils(); i++){
		cout<<sec1.getElemento(i)<<" ";
	}
	
	cout<<endl<<"Secuencia 2: ";
	for(int i=0; i<sec2.getUtils(); i++){
		cout<<sec2.getElemento(i)<<" ";
	}
	
	cout<<"\nIntroduce la posición en la que deseas insertar la secuencia 2: ";
	cin>>pos;
	
	sec1.insertaSecuencia(sec2, pos);
	
	cout<<"Secuencia final: ";
	for(int i=0; i<sec1.getUtils()+sec2.getUtils(); i++){
		cout<<sec1.getElemento(i)<<" ";
	}
}
















