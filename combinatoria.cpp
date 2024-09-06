#include <iostream>
using namespace std;
int combin(int n,int k ){
	if (n==k){
		return 1;
	}else if(k == 1){
		return n;	
	}else{
		return combin(n-1,k-1)+combin(n-1,k);
	}
}

int main(){
	int m, n;
	int combinatoria;
	cout<<"Introduce el valor de m: "<<endl;
	cin>>m;
	cout<<"Introduce el valor de n: "<<endl;
	cin>>n;
	combinatoria=combin(m,n);
	cout<<"La combinacion es: "<<combinatoria<<endl;
	return 0;
}