#include<iostream>
using namespace std;
int main(){
	cout<<"Inserte un numero de 5 digitos"<<endl;
	int num;
	cin>>num;
	if(num>=10000 and num<=99999){
		for(int i=10000;i>=1;i/=10)
		{			
			cout<<num/i<<"\t";
			num=num%i;
		}
	}
	else{
		cout<<"El numero que has ingresado no tiene 5 digitos \n\n";
		main();
	}
}
