#include <iostream>

using namespace std;

int main(){
	char caracter, min='z', terminador='#', max='b';
	char vector[100];
	int utils=0, num_vocal=0, num_cons=0;
	int contador_vocal=0, contador_cons=0;
	bool control=false; //Para no mostrar informacion de mas
	float prop_vocal=0.0, prop_cons=0.0; 
	
	cout<<"Introduce caracteres (Solo se consideraran las minusculas, # para terminar): "<<endl;
	cin>>caracter;
	
	while(caracter!=terminador){
		if(caracter>='a' && caracter<='z'){
			vector[utils]=caracter;
			utils++;
		}
		cin>>caracter;
	}
	
	cout<<"Elementos válidos introducidos: "<<endl;
	for(int i=0; i<utils; i++){
		cout<<vector[i];
	}
	cout<<endl;
	
	//Vocales
	for(int i=0; i<utils; i++){
		if((((vector[i]=='a' || vector[i]=='e') || (vector[i]=='i' || vector[i]=='o')) || vector[i]=='u')){
				num_vocal++;
				num_cons=utils-num_vocal;
			if(vector[i]<=min){
					min=vector[i];
				if(vector[i]==min){
					contador_vocal++;
				}
			}
		}	
	}
	
	//Consonantes. Los bucles estan divididos ya que el comportamiento al buscar un elemento mayor es diferente
	for(int i=0; i<utils; i++){
		if(((vector[i]!='a' || vector[i]!='e') || (vector[i]!='i' || vector[i]!='o')) || vector[i]!='u'){
			if(vector[i]>=max){
				max=vector[i];
			}
		}
	}
	for(int i=0; i<utils; i++){
		if(vector[i]==max){
			contador_cons++;
		}
	}
	
	//Compruebo si min es una vocal o no y en caso de ser asi lo muestro
	cout<<endl<<"Vocal mínima: ";
	
	if(((min=='a' || min=='e') || (min=='i' || min=='o')) || min=='u'){
		cout<<min<<endl;
		control=true;
	}else{
		cout<<"No hay vocales"<<endl;
	}
	
	if(control!=false){
		cout<<"Aparece: "<<contador_vocal<<" veces"<<endl;
		cout<<"Hay "<<num_vocal<<" vocales en total"<<endl;
	}
	
	prop_vocal=num_vocal/(float)utils;
	
	cout<<"Proporción de vocales: "<<prop_vocal<<" = "<<prop_vocal*100<<"%"<<endl;
	
	//Idem para las consonantes
	control=false;
	cout<<endl<<"Consonante máxima: ";
	
	if(((max=='a' || max=='e') || (max=='i' || max=='o')) || max=='u'){
		cout<<"No hay consonantes"<<endl;
	}else{
		cout<<max<<endl;
		control=true;
	}
	
	if(control!=false){
		cout<<"Aparece: "<<contador_cons<<" veces"<<endl;
		cout<<"Hay "<<num_cons<<" consonantes en total"<<endl;
	}
	
	prop_cons=num_cons/(float)utils;
	
	cout<<"Proporción de consonantes: "<<prop_cons<<" = "<<prop_cons*100<<"%"<<endl;
	
	return 0;
}
