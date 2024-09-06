#include <iostream>
using namespace std;
int product(int a, int n){
	if (a==0){
		return 0;
	}else{
		return n+product(a-1,n);
	} 
}

int main(){
	int cantidad;
	int numero;
	int producto;
	cout<<"Introduce el numero: "<<endl;
	cin>>numero;
	cout<<"Introduce la cantidad: "<<endl;
	cin>>cantidad;
	producto=product(cantidad, numero);
	cout<<"El producto de "<< numero <<" es: "<<producto<<endl;
	return 0;
}