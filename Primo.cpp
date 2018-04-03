#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Inserte un numero ---> ";
	cin>>x;
	y=1;
	if (x==1 or x==0)
		cout<<"No es primo";
	else {
		for (int i=2;i<x;i++){
			if(x%i==0)
				y+=1;}
		
		if(y<3)
			cout<<x<<" es primo ";
		else
			cout<<x<<" no es primo";
}
}
