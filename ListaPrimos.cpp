#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Inserte un numero ---> ";
	cin>>x;
	y=1;
	z=2;
	if (x==1 or x==0)
		cout<<"No hay numero primos";
	else{
	while(z!=x){
		for (int i=2;i<=z;i++){
			if(z%i==0)
				y+=1;}
		
		(y<3)?cout<<z<<"\n",z++,y=1:z++,y=1;
		}
	}
	}


