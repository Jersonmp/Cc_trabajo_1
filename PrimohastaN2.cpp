#include<iostream>
#include "Primo.cpp"
using namespace std;
//Imprime los primos hasta N
void PrimosHastaN(int num){
	for(int i=2;i<=num;i++){
		if(EsPrimo(i)==1)
			cout<<i<<"\n";
		
	}
}

int main(){
	PrimosHastaN(14);
}
