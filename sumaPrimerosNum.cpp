#include <iostream>
using namespace std;
int sumaprim(int numero){
	if (numero==1){
		return 1;
	}else if (numero ==0){
		return 0;
	}else{
		return numero+sumaprim(numero-1);
	} 
}

int main(){
	int numero;
	int suma;
	cout<<"Introduce el numero: "<<endl;
	cin>>numero;
	suma=sumaprim(numero);
	cout<<"La suma de los primeros numeros es: "<<suma<<endl;
	return 0;
}