#include<iostream>
using namespace std;
int main (){
	int a1,a2,a3 ,n, contador;
	a1=1;
	a2=0;
	contador=0;
	cout<<"Inserte cantidad ---> ";
	cin>>n;
	
		while(contador<n){
			cout<<a2<<endl;
			a1=a1+a2;
			cout<<a1<<endl;
			a2=a1+a2;
			contador=contador+2;			
		}
	
}
