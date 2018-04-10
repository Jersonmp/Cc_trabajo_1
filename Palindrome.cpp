#include<iostream>
using namespace std;
bool EsPalindrome(int num){
	int nuo, nua =0, aux;
	nuo=num;
	while(num>0)
	{
		aux=num%10;
		num /=10;
		nua=nua*10+aux;
	}
	
	return(nuo==nua)?true:false;
}
int main(){
	cout<< EsPalindrome(1551);
}
