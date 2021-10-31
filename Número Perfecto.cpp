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

cout<<"Introduce un n�mero: "<<endl;
cin>>num;

if(num>0){

cout<<"Numeros perfectos entre 0 y "<<num<<": "<<endl;

//Los n�meros perfectos de 0 a num
for(int i=1; i<=num; i++){
	if(NumPerf(i, div)){
		encontrado=true;
		num2=i;
		cout<<num2<<endl;
	}
}

cout<<"El n�mero perfecto mas cercano a "<<num<<" entre 0 y "<<num<<" es el: "<<num2<<endl;

if(NumPerf(num, div)){ //Ver si el n�mero introducido es perfecto
	perfecto=true;
}
//Mostrar el resultado de lo anterior
if(perfecto){
	cout<<"Adem�s, el "<<num<<" es un n�mero perfecto "<<endl<<endl;
}else{
	cout<<"Adem�s, el "<<num<<" no es un n�mero perfecto "<<endl<<endl;
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




