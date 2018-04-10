#include <iostream>
//Imprime lista de numeros
using namespace std;

void ListaDeNumeros(int numero){
	for(int i=0;i<numero;i++){
    	cout<< i<<",";
	}
	cout<<numero;
}

int main(){
    ListaDeNumeros(15);
    }
