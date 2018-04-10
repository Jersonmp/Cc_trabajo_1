#include<iostream>
using namespace std;
void ImprimeSeparados(int numero){
	if(numero>=10000 and numero<=99999){
		for(int i=10000;i>=1;i/=10)
		{			
			cout<<numero/i<<"\t";
			numero=numero%i;
		}
	}
	else{
		cout<<"El numero que has ingresado no tiene 5 digitos \n\n";
	}
}
int main(){
	ImprimeSeparados(45689);
	
}
