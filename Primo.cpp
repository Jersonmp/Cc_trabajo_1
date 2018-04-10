#include<iostream>
using namespace std;
void EsPrimo(int x){
	int y,z;
	y=1;
	(x==1 or x==0)?cout<<"No es primo":true;                                       
	if(x>=2){
	for(int i=2;i<x;i++)(x%i==0)?y+=1:true;
		(y<3)?cout<<x<<" es primo ":cout<<x<<" no es primo\n";
	}
}
int main(){
	cout<<"Inserte numero -->";
	int num;
	cin>>num;
	EsPrimo(num);
}
