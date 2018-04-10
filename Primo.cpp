#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Inserte un numero ---> ";
	cin>>x;
	y=1;
	(x==1 or x==0)?cout<<"No es primo":true;                                       
	if(x>=2){
	for(int i=2;i<x;i++)(x%i==0)?y+=1:true;
		(y<3)?cout<<x<<" es primo ":cout<<x<<" no es primo\n";
	}
}

