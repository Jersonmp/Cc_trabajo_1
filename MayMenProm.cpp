#include <iostream>

using namespace std;
//MayMenProm
int main(){
	cout<<"Introduce 3 numeros"<<endl;
	float a,b,c;
	cin>>a,cin>>b,cin>>c;

    (a>b)?((a>c)?cout<<"el mayor es "<<a<<endl,((b>c)?cout<<"El menor es "<<c<<endl:cout<<"El menor es "<<b<<endl):true):true;
    (b>a)?((b>c)?cout<<"el mayor es "<<b<<endl,((a>c)?cout<<"El menor es "<<c<<endl:cout<<"El menor es "<<a<<endl):true):true;
    (c>a)?((c>b)?cout<<"el mayor es "<<c<<endl,((a>b)?cout<<"El menor es "<<b<<endl:cout<<"El menor es "<<a<<endl):true):true;
    	
    cout<<"El promedio de los 3 numeros es "<<(a+b+c)/3;
    
}

