#include<iostream>
using namespace std;
int factorial(int num){
	int res;
	res=1;
	while(num>1){
		res=res*num;
		num--;
	}
	cout<<"Factorial es "<<res;
}
int main(){
	cout<<"Ingrese numero para saber su factorial ---> ";
	int valor;
	cin>>valor;
	factorial(valor);
}
