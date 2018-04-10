#include<iostream>
using namespace std;
//Imprime los primos hasta N
void PrimosHastaN(int num){
	int y,z;
	y=1;
	z=2;
	if (num==1 or num==0)
		cout<<"No hay numero primos";
	else{
	while(z!=num){
		for (int i=2;i<=z;i++){
			if(z%i==0)
				y+=1;}
		
		(y<3)?cout<<z<<"\n",z++,y=1:z++,y=1;
		}
	}
	
}
int main(){
	cout<<"Inserta un numero --> ";
	int x;
	cin>>x;
	PrimosHastaN(x);
	}

