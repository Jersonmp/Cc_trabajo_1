#include <iostream>
//Dos numeros, saber si son multiplo de dos, si uno es multiplo de otro, y si a elevado al cuadrado es b
using namespace std;
void DosNumeros(int a, int b){
	(a%2==0 and b%2==0 )?cout<<a<<" y "<<b<<" son multiplos de 2"<<endl:cout<<"uno de los dos numeros no es multiplo de 2";
	(a%b==0)?cout<<a<<" es multiplo de "<<b<<endl:cout<<a<<" no es multiplo de "<<b<<endl;
	((a*a)==b)?cout<<a<<" elevado al cuadrado es "<<b:cout<<a<<" elevado al cuadrado no es "<<b;	
}
int main(){
	int x,y;
	cout<<"Inserte dos numeros "<<endl;
	cin>>x;
	cin>>y;
	DosNumeros(x,y);		
}
