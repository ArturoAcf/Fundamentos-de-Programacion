#include <iostream>

using namespace std;

int main(){
int n;

cout<<"Intrdouce el número de filas de las pirámides de enteros: "<<endl;
cin>>n;

for(int i=n; i>=1; i--){
	for(int j=1; j<=n-i; j++){           
   	           cout<<" ";
	}

	for(int j=1; j<=i; j++){ 
		cout<<j%10;
	}
	cout<<" ";
	for(int j=1; j<=i; j++){
		cout<<j%10;
	}
	cout<<endl;
}

for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
		cout<<j%10;
	}
cout<<endl;
}

   int L;
   char letra; 
   
   do{
       cout<<"Introduce número de filas de la pirámide de caracteres: ";
       cin >>L;
   }while(L<=0);
   
   letra='A';
   
   for(int k=1; k<=L; k++){
	      for(int i=1; i<=L-k; i++){           
   	           cout<<" ";
	      }
	         
	      for(int i=1; i<=k-1; i++){
		       if(letra>'Z'){
	 	            letra = 'A';
		       }
		            
		       cout<<letra;
		         
		       letra++;
	      }
	         
	      for(int i=1; i<=k; i++){            
	           cout<<i%10;
	      }
	      
	      cout<<endl;
   }

    do{
        cout<<"Introduce el número de filas que tendrá la pirámide de enteros inversa: "<<endl;
        cin>>n;
    }while(n<=0);

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=n; k>i; k--){
            cout<<(n-i)%10;
        }
        for(int l=n; l>i+1; l--){
            cout<<(n-i)%10;
        }
        cout<<endl;
    }

return 0;
}
