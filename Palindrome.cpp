#include<iostream>
using namespace std;
int Palindrome(int num){
	int nuo, nua =0, aux;
	nuo=num;
	while(num>0)
	{
		aux=num%10;
		num /=10;
		nua=nua*10+aux;
	}
	
	(nuo==nua)?cout<<"Es palindromo":cout<<"No es palindromo";
}
int main(){
	cout<<"Inserta un numero para saber si es palindromo\n";
	int x;
	cin>>x;
	Palindrome(x);
}
