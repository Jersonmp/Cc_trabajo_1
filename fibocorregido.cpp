#include<iostream>
using namespace std;
/*int main (){
	int a1,a2,a3 ,n, contador;
	a1=1;
	a2=0;
	a3=0;
	contador=0;
	cout<<"Inserte cantidad ---> ";
	cin>>n;

		while(contador<n){
			a3=a1+a2;
			cout<<a2<<endl;
			a1=a2;
			a2=a3;
            contador=contador++;
		}

}*/
int fibonacci(int n){
	if(n==0 || n==1)
		return 1;
	else{
		return fibonacci(n-2)+fibonacci(n-1);
	}
}

int main(){
	cout<<"Inserte cantidad\n";
	int num,res;
	cin>>num;
	for(int i;i<num;i++){
		res=fibonacci(i);
		cout<<res<<endl;
	}
}
