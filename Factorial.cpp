#include<iostream>
using namespace std;

int factorial(int num){
	int res;
	res=1;
	while(num>1){
		res=res*num;
		num--;
	}
return res;
}
int main(){
	cout<<factorial(5);
}
