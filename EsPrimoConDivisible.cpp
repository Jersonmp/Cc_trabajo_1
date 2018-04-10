#include<iostream>
using namespace std;
void EsPrimo(int x){
	int y,z;
	
	(x==1 or x==0)?cout<<"No es primo":true;                                       
	if(x>=2){
	for(int i=1;i<x;i++)
		(x%i==0)?(y+=1,(y==2)?z=i:true):true;
		//(x%i==0)?y+=1:true;
	(y<3)?cout<<x<<" es primo ":cout<<x<<" no es primo, su primer divisible es --> "<<z;
	}
}
int main(){
	cout<<"Inserte numero -->  ";
	int num;
	cin>>num;
	EsPrimo(num);
}
