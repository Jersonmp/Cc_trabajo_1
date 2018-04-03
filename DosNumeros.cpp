#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"inserte dos numeros "<<endl;
	cin>>a;
	cin>>b;
	if (a%2==0 and b%2==0 ){
		cout<<a<<" y "<<b<<" son multiplos de 2"<<endl;}
	else
		cout<<"uno de los dos numeros no es multiplo de 2";
		
	if(a%b==0)
		cout<<a<<" es multiplo de "<<b<<endl;
	else
		cout<<a<<" no es multiplo de "<<b<<endl;
	
	if ((a*a)==b)
		cout<<a<<" elevado al cuadrado es "<<b;
	else
		cout<<a<<" elevado al cuadrado no es "<<b;
		
	}
