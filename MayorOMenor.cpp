#include <iostream>

using namespace std;

int main()
{
    cout << "Introduce tu edad ---> ";
    int x;
    cin>>x;
    (x<18 and x>=0)?cout<<"Eres menor de edad "<<endl:true;
    (x>18)?cout<<"Eres mayor de edad":true;
    (x<0)?cout<<"Inserta un numero positivo\n",main():true;
}
