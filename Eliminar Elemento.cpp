#include <iostream>

using namespace std;

int main(){
	int vector[100];
	int numero;
	int utils=0;
	
	cout<<"Introduce el vector (-1 para terminar):";
	cin>>numero;
	while(numero>=0){
		vector[utils]=numero;
		utils++;
		cin>>numero;
	}
	
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0; i<utils-1; i++){
		for(int j=i+1; j<utils; j++){
			if(vector[i]==vector[j]){
				for(int k=j; k<utils-1; k++){
					vector[k]=vector[k+1];
				}
				utils--;
				j--;
			}
		}
	}
	
	for(int i=0; i<utils; i++){
		cout<<vector[i]<<" ";
	}
}
