#include <iostream>

using namespace std;

int main(){
	int vector[100];
	int utils=0;
	int numero, t;
	int suma=0;

	//[4,1,3,9,2,]
	vector[0]=4;
	vector[1]=1;
	vector[2]=3;
	vector[3]=9;
	vector[4]=2;
	utils=5;

	cout<<"Vector: ";
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	cout<<endl;

	cout<<"Introduce t: ";
	cin>>t;

	// Busca una secuencia de números seguidos en el vector que sumen t
	// Ejemplo -> vector=[4,1,3,9,2,] y t=12 => Existe secuencia en la posición 2 (3+9=12)

	for(int i=0; i<utils; i++){
			suma=vector[i];
		for(int j=i+1; j<utils; j++){
				suma=suma+vector[j];
			if(suma==t){
				cout<<"\nExiste secuencia en la posición "<<i;
			}else{
				cout<<"No existe secuencia"<<endl;
			}
		}
	}
}
