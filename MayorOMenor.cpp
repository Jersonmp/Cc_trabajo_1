#include <iostream>

using namespace std;
int main();

void MayMenEdad(int x){
	(x<18 and x>=0)?cout<<"Eres menor de edad "<<endl:true;
    (x>18)?cout<<"Eres mayor de edad":true;
    (x<0)?cout<<"Inserta un numero positivo\n",main():true;
}

int main()
{
    cout << "Introduce tu edad ---> ";
    int numero;
    cin>>numero;
    MayMenEdad(numero);
    
}
