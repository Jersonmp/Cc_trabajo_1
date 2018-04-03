#include<iostream>
using namespace std;
int main(){
	cout<<"Ingrese numero para saber su factorial ---> ";
	int num,res;
	cin>>num;
	res=1;
	while(num>1){
		res=res*num;
		num--;
	}
	cout<<"El factorial es "<<res;
}
