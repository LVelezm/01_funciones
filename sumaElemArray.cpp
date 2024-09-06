#include <iostream>
using namespace std;
int sumaelemarray(int A[],int n){
	if (n==1){
		return A[1];
	}else{
		return A[n]+sumaelemarray(A,n-1);
	} 
}

int main(){
	int n=4;
	int A[n]={0,16,5,3,-2,1};
	int suma;
	cout<<"Introduce la posicion: "<<endl;
	cin>>n;
	suma=sumaelemarray(A,n);
	cout<<"La suma de los elementos es: "<<suma<<endl;
	return 0;
}