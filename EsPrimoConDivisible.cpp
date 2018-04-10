
#include<iostream>
using namespace std;
bool EsPrimo(int x){
	int y,z;
	y=1;
	if(x==1 or x==0)
		return false;
	if(x>=2){
		for(int i=2;i<x;i++)
			(x%i==0)?y+=1:true;
		return (y<3)?true:false;
	}
}
int main(){
	
	cout<<EsPrimo(7);
}
