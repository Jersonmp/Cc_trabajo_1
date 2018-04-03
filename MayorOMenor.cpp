#include <iostream>

using namespace std;

int main()
{
    cout << "Introduce tu edad ---> ";
    int x;
    cin>>x;
    if (x<18 and x>=0)
        cout<<"Eres menor de edad "<<endl;
    else if (x<0){
        cout<<"Inserta nuevamente un numero correcto"<<endl;
        main();
	}
	else 
		cout<<"Eres mayor de edad";
}
