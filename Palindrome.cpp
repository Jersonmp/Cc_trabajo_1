#include<iostream>
using namespace std;
int main(){
	cout<<"Inserta un numero de 5 digitos para saber si es palindromo\n";
	int nuo, num, nua =0, aux;
	cin>>num;
	nuo=num;
	while(num>0)
	{
		aux=num%10;
		num /=10;
		nua=nua*10+aux;
	}
	if(nuo==nua)
		cout<<"Es palindromo";
	else
		cout<<"No es palindromo";
	
	
		
}
