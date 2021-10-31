#include <iostream>

using namespace std;

//Ver si un numero es perfecto
bool NumPerf(int n, int res){
	bool aux=false;

	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			res=res+i;
		}
	}

	if(res==n){
		aux=true;
	}else{
		aux=false;
	}

return aux;
}

int main(){
int num, div=1, num2=0;
bool encontrado=false, perfecto=false;
string seguir;

do{

cout<<"Introduce un número: "<<endl;
cin>>num;

if(num>0){

cout<<"Numeros perfectos entre 0 y "<<num<<": "<<endl;

//Los números perfectos de 0 a num
for(int i=1; i<=num; i++){
	if(NumPerf(i, div)){
		encontrado=true;
		num2=i;
		cout<<num2<<endl;
	}
}

cout<<"El número perfecto mas cercano a "<<num<<" entre 0 y "<<num<<" es el: "<<num2<<endl;

if(NumPerf(num, div)){ //Ver si el número introducido es perfecto
	perfecto=true;
}
//Mostrar el resultado de lo anterior
if(perfecto){
	cout<<"Además, el "<<num<<" es un número perfecto "<<endl<<endl;
}else{
	cout<<"Además, el "<<num<<" no es un número perfecto "<<endl<<endl;
}

perfecto=false;
encontrado=false;
}

cout<<"Escriba SI para continuar o cualquier otra cosa si desea finalizar: "<<endl;
cin>>seguir;

}while(seguir=="SI");

cout<<"Fin del programa"<<endl;

return 0;
}




