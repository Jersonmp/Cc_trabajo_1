#include<iostream>
using namespace std;
bool EsPrimo(int x){

	for(int i=2;i<x;i++){
		if(!(x%i))
			return false;
		
	}
	return true;
}
