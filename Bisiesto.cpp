#include <iostream>
using namespace std;

bool bisiesto(int num){
	return (num % 4 == 0 && (num % 100 != 0 || num % 400 == 0))? true :false;
}

int main(){
	cout<<bisiesto(1800);
}
