#include <iostream>

using namespace std;

class Intervalo{
	private:
		int a, b;	
		bool abierto_izda, abierto_dcha;
	public:
		//Constructores
		Intervalo(){
			a=0;
			b=0;
			abierto_izda=true;
			abierto_dcha=true;
		}
		
		Intervalo(bool ai, int ea, int eb, bool ad){
			a=ea;
			b=eb;
			abierto_izda=ai;
			abierto_dcha=ad;
		}
				
		//Consultores
		bool getAbiertoIzda(){
			return abierto_izda;
		}
		
		bool getAbiertoDcha(){
			return abierto_dcha;
		}
		
		int getA(){
			return a;
		}
		
		int getB(){
			return b;
		}
		
		//Métodos
		bool vacio(){ //Comprobar si es un intervalo vacío
			bool vacio=false;
			
			if(a==b && (abierto_izda==true && abierto_dcha==true)){
				vacio=true;
			}
			
			return vacio;
		}
		
		bool contieneNumero(int n){ //Comprobar si contiene un número
			bool contiene=false;
			
			if((abierto_izda==false && abierto_dcha==false) && (n>=a && n<=b)){
				contiene=true;
			}else if((abierto_izda==false && abierto_dcha==true) && (n>=a && n<b)){
				contiene=true;
			}else if((abierto_izda==true && abierto_dcha==false) && (n>a && n<=b)){
				contiene=true;
			}else if((abierto_izda==true && abierto_dcha==true) && (n>a && n<b)){
				contiene=true;
			}
			
			return contiene;
		}
		
		//bool contieneIntervalo(Intervalo nuevoInt) Cabecera del método para comprobar si contiene otro intervalo
};

int main(){
	int numero;
	bool ai=false, ad=false;
	int a, b, i=0;
	char sino;
	int vector[100];
	Intervalo inter;
	
	//Creamos el intervalo
	cout<<"Indica si el intervalo es abierto o cerrado e introduce sus valores: "<<endl;
	
	cout<<"Izquierda (S / N): ";
		cin>>sino;
	if(sino=='S'){
		ai=true;
	}
	
	cout<<"Derecha (S / N): ";
		cin>>sino;
	if(sino=='S'){
		ad=true;
	}
	
	cout<<"Cota inferior: ";
		cin>>a;
	while(a<0){
		cout<<"Reintroduce la cota: ";
		cin>>a;
	}
	
	cout<<"Cota superior: ";
		cin>>b;
	while(b<0){
		cout<<"Reintroduce la cota: ";
		cin>>b;
	}
	
    inter=Intervalo(ai, a, b, ad);
	
	//En lugar de crear un método para comprobar esta información, lo he realizado
	//Directamente aquí para utilizar los consultores de la clase.
	//Además muestro el intervalo de forma adecuada.
	if(inter.getAbiertoIzda()==true && inter.getAbiertoDcha()==true){
		cout<<"\nEl intervalo es: ("<<a<<","<<b<<")"<<" y es un intervalo abierto"<<endl;
	}else{
		if(inter.getAbiertoIzda()==false && inter.getAbiertoDcha()==true){
			cout<<"\nEl intervalo es: ["<<a<<","<<b<<")"<<" y esta acotado inferiormente"<<endl;
		}else{
			if(inter.getAbiertoIzda()==true && inter.getAbiertoDcha()==false){
				cout<<"\nEl intervalo es: ("<<a<<","<<b<<"]"<<" y esta acotado superiormente"<<endl;
			}else{
				cout<<"\nEl intervalo es: ["<<a<<","<<b<<"]"<<" y es un intervalo cerrado, esto es, esta acotado"<<endl;
			}
		}
	}
	
	//Lectura de números
	cout<<"Introduce numeros (-1 para terminar):\n";
	cin>>numero;
	
	while(numero!=-1){
		vector[i]=numero;
		i++;
		cin>>numero;
	}
	cout<<endl;
	
	//LLamadas a los métodos de la clase
	for(int j=0; j<i; j++){
		if(vector[j]<0){
			cout<<"\nNumero no valido, continua introduciendo: ";
		}else{
			if(inter.vacio()==true){
				cout<<"\nIntervalo vacio, no contiene el numero "<<vector[j]<<endl;
			}else{
				if(inter.contieneNumero(vector[j])==true){
					cout<<vector[j]<<" esta contenido en el intervalo."<<endl;
				}else{
					cout<<vector[j]<<" no esta contenido en el intervalo."<<endl;
				}
			}
		}
	}
	
	return 0;
}








