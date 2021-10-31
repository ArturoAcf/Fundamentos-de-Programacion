#include <iostream>

using namespace std;

//Clase ya implementada en el examen por el ejercicio
class SecuenciaCaracteres{
	private:
		static const int TAMANIO=100;
		char vector_privado[TAMANIO];
		int total_utilizados;
		
	public:
		SecuenciaCaracteres():total_utilizados(0){}
		 
		int TotalUtilizados(){
			return total_utilizados;
		}
		 
		int Capacidad(){
			return TAMANIO;
		}
		 
	    void Aniade(char nuevo){
      		if(total_utilizados<TAMANIO){
            	vector_privado[total_utilizados]=nuevo;
                total_utilizados++;
        	}
   		}
		 
		char Elemento(int indice){
			return vector_privado[indice];
		}
		 
		//Método del ejercicio
		bool contieneDebilmente(SecuenciaCaracteres sec){
			bool contenida=false;
			int posicion=0;
			
			for(int i=0; i<total_utilizados && posicion<sec.total_utilizados; i++){
				if(sec.Elemento(posicion)==vector_privado[i]){
					posicion++;
				}

				if(posicion==sec.TotalUtilizados()){
					contenida=true;
				}
			}
			return contenida;
		}	 
};

int main(){
	SecuenciaCaracteres izda;
	SecuenciaCaracteres dcha;
	SecuenciaCaracteres sec;
	char c;
	
	cout<<"Introduce los elementos de la secuencia principal (# para terminar): "<<endl;
	cin>>c;
	
	while(c!='#'){
		sec.Aniade(c);
		cin>>c;
	}
	
	cout<<"Introduce los elementos de la secuencia izda (# para terminar): "<<endl;
	cin>>c;
	
	while(c!='#'){
		izda.Aniade(c);
		cin>>c;
	}
	
	cout<<"Introduce los elementos de la secuencia dcha (# para terminar): "<<endl;
	cin>>c;
	
	while(c!='#'){
		dcha.Aniade(c);
		cin>>c;
	}
	
	if(sec.contieneDebilmente(izda)){
		cout<<"SI izda"<<endl;
	}else{
		cout<<"NO izda"<<endl;
	}
	
	if(sec.contieneDebilmente(dcha)){
		cout<<"SI dcha"<<endl;
	}else{
		cout<<"NO dcha"<<endl;
	}
		
	return 0;
}





