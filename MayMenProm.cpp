#include <iostream>

using namespace std;
//MayMenProm
int main(){
	cout<<"Introduce 3 numeros"<<endl;
	float a,b,c;
	cin>>a;
    cin>>b;
    cin>>c;

    if (a>b){
        if(a>c){
            cout<<"el mayor es "<<a<<endl;
            if(b>c)
            cout<<"El menor es "<<c<<endl;
            else
            cout<<"El menor es "<<b<<endl;
        }
    }

    if (b>a){
        if (b>c){
            cout<<"el mayor es "<<b<<endl;
            if(a>c)
            cout<<"El menor es "<<c<<endl;
            else
            cout<<"El menor es "<<a<<endl;
    	}
    }
    if (c>a){
        if (c>b){
            cout<<"el mayor es "<<c<<endl;
            if(a>b)
            cout<<"El menor es "<<b<<endl;
            else
            cout<<"El menor es "<<a<<endl;
    	}
    }
    cout<<"El promedio de los 3 numeros es "<<(a+b+c)/3;
    
}

