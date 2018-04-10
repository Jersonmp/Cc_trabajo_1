#include <iostream>
using namespace std;

void bisiesto(int num){
	(num % 4 == 0 && (num % 100 != 0 || num % 400 == 0))? cout<<"El anho "<<num<<" si es bisiesto ":cout<<"El anho "<<num<<" No es bisiesto ";
}

int main(){
	int anho;
	cout<<"Inserte el anho--> ";
	cin>>anho;
	bisiesto(anho);
}
