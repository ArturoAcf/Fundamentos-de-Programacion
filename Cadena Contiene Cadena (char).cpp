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
	SecuenciaCaracteres sec1;
	SecuenciaCaracteres sec2;
	char c;
	
	cout<<"Introduce los elementos de la primera secuencia (# para terminar): "<<endl;
	cin>>c;
	
	while(c!='#'){
		sec1.Aniade(c);
		cin>>c;
	}
	
	cout<<"Introduce los elementos de la segunda secuencia (# para terminar): "<<endl;
	cin>>c;
	
	while(c!='#'){
		sec2.Aniade(c);
		cin>>c;
	}
	
	cout<<"\nSECUENCIAS:"<<endl;
	
	cout<<"Secuencia 1: {";
	for(int i=0; i<sec1.TotalUtilizados(); i++){
		cout<<"'"<<sec1.Elemento(i)<<"',";
	}
	cout<<"}"<<endl;
	
	cout<<"Secuencia 2: {";
	for(int i=0; i<sec2.TotalUtilizados(); i++){
		cout<<"'"<<sec2.Elemento(i)<<"',";
	}
	cout<<"}"<<endl;
	
	if(sec1.contieneDebilmente(sec2)==true){
		cout<<"La primera secuencia contiene débilmente a la segunda";
	}else{
		cout<<"La primera secuencia NO contiene débilmente a la segunda";
	}
	
	return 0;
}





