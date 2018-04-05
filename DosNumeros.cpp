#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"inserte dos numeros "<<endl;
	cin>>a;
	cin>>b;
	(a%2==0 and b%2==0 )?cout<<a<<" y "<<b<<" son multiplos de 2"<<endl:cout<<"uno de los dos numeros no es multiplo de 2";
	(a%b==0)?cout<<a<<" es multiplo de "<<b<<endl:cout<<a<<" no es multiplo de "<<b<<endl;
	((a*a)==b)?cout<<a<<" elevado al cuadrado es "<<b:cout<<a<<" elevado al cuadrado no es "<<b;		
	}
