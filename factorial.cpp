#include <iostream>
using namespace std;
int fact(int numero){
	if (numero==1){
		return 1;
	}else if(numero == 0){
		return 1;	
	}else{
		return numero*fact(numero-1);
	}
}

int main(){
	int numero;
	int factorial;
	cout<<"Introduce el numero: "<<endl;
	cin>>numero;
	factorial=fact(numero);
	cout<<"El factorial es: "<<factorial<<endl;
	return 0;
}