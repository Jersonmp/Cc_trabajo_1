#include<iostream>
using namespace std;
void ImprimeNPrimos(int num){
	int w,y,z;
	y=1;
	z=2;
	w=0;
	while(w!=num){
		for (int i=2;i<=z;i++){
			(z%i==0)?y+=1:true;
		}
		(y<3)?cout<<z<<"\n",z++,y=1,w+=1:z++,y=1;
	}
}
int main(){
	ImprimeNPrimos(10);
}




