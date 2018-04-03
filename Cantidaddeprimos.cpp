
#include<iostream>
using namespace std;
int main(){
	int w,x,y,z;
	cout<<"Inserte un numero ---> ";
	cin>>x;
	y=1;
	z=2;
	w=0;

	while(w!=x){
		for (int i=2;i<=z;i++){
			if(z%i==0)
				y+=1;
				}

		if(y<3){
			cout<<z<<"\n";
			z++;
			y=1;
			w+=1;

		}
		else{
			z++;
			y=1;
		}
	}
}

